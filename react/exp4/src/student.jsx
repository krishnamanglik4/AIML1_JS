import React from "react";

function Student(props) {
  return (
    <div
      style={{
        border: "1px solid #ccc",
        padding: "15px",
        margin: "10px",
        borderRadius: "10px",
        width: "250px",
        boxShadow: "0 2px 5px rgba(0,0,0,0.2)",
        textAlign: "center",
      }}
    >
      <h3>{props.name}</h3>
      <p>Course: {props.course}</p>
      <p>Marks: {props.marks}</p>
    </div>
  );
}

export default Student;