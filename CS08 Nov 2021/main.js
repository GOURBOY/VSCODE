// function fun(){
//     var a=10;
//     for(var x=0;x<a;x++){
//         document.writeln(x);
//     }      
//  } 
//  function add(x=30,y=15){
//      var z=x/y;
//      alert(z);
     
//  }
// var minus=min(a,b)
// {
//    var mi=a-b;
//    return mi;
// }
// alert(minus(8,5));
let student={Name:'Abhay',Roll:9,Sec:'CSI'};
student.mob=9977;
console.log(student);
delete student.mob;
document.write(student.mob);
document.write('mob' in student);