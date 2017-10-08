var fs = require("fs");
var data = fs.readFileSync('4.txt');
console.log(data.toString());
console.log("程序执行结束");