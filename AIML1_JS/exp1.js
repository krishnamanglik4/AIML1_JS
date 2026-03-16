
function createInputs(){

let n=document.getElementById("subjects").value;
let area=document.getElementById("inputs");

area.innerHTML="";

for(let i=1;i<=n;i++){

area.innerHTML+=
// "Subject Name: <input type='text' id='s"+i+"'> "+
"Marks "+i+" <input type='number' id='m"+i+"'><br>";
}

}

function calculate(){

let n=document.getElementById("subjects").value;

let total=0;

for(let i=1;i<=n;i++){

let marks=parseFloat(document.getElementById("m"+i).value);

total+=marks;

}

let avg=total/n;

let grade;


if(avg>=90){grade="A+";}
else if(avg>=75){grade="A";}
else if(avg>=60){grade="B"; }
else if(avg>=50){grade="C";}
else{grade="D";}

let result = avg>=40 ? "PASS" : "FAIL";

let colorClass = avg>=40 ? "pass" : "fail";

document.getElementById("result").innerHTML=

"<h3>Result Summary</h3>"+

"<table>"+
"<tr><th>Total Marks</th><td>"+total+"</td></tr>"+
"<tr><th>Average</th><td>"+avg+"%</td></tr>"+
"<tr><th>Grade</th><td>"+grade+" </td></tr>"+
"<tr><th>Result</th><td class='"+colorClass+"'>"+result+"</td></tr>"+
"</table>"+

"<div class='progress'><div class='bar' style='width:"+avg+"%'></div></div>";

}

