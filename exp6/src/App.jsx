import { useState, useEffect } from "react";
import "./App.css";

function App() {
  // form states
  const [name, setName] = useState("");
  const [email, setEmail] = useState("");
  const [password, setPassword] = useState("");

  // error + success
  const [error, setError] = useState("");
  const [success, setSuccess] = useState("");

  // API data
  const [users, setUsers] = useState([]);

  // 🔥 Fetch API data using useEffect
  useEffect(() => {
    fetch("https://jsonplaceholder.typicode.com/users")
      .then((res) => res.json())
      .then((data) => setUsers(data))
      .catch((err) => console.log(err));
  }, []);

  // validate form
  const validateForm = () => {
    if (!name || !email || !password) {
      setError("All fields are required!");
      return false;
    }

    if (!email.includes("@")) {
      setError("Invalid email format!");
      return false;
    }

    if (password.length < 4) {
      setError("Password must be at least 4 characters!");
      return false;
    }

    setError("");
    return true;
  };

  // submit handler
  const handleSubmit = (e) => {
    e.preventDefault();

    if (validateForm()) {
      setSuccess("Registration Successful!");
      setName("");
      setEmail("");
      setPassword("");
    }
  };

  return (
    <div className="container">
      <div className="card">
        <h1>Registration Form</h1>

        <form onSubmit={handleSubmit}>
          <input
            type="text"
            placeholder="Enter Name"
            value={name}
            onChange={(e) => setName(e.target.value)}
          />

          <input
            type="email"
            placeholder="Enter Email"
            value={email}
            onChange={(e) => setEmail(e.target.value)}
          />

          <input
            type="password"
            placeholder="Enter Password"
            value={password}
            onChange={(e) => setPassword(e.target.value)}
          />

          <button type="submit">Register</button>
        </form>

        {/* error */}
        {error && <p className="error">{error}</p>}

        {/* success */}
        {success && <p className="success">{success}</p>}

        {/* API DATA */}
        <div className="users">
          <h2>Registered Users (API Data)</h2>
          <ul>
            {users.slice(0, 5).map((user) => (
              <li key={user.id}>
                {user.name} - {user.email}
              </li>
            ))}
          </ul>
        </div>
      </div>
    </div>
  );
}

export default App;