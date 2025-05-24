// const mysql = require("mysql2");
// const db = mysql.createConnection({
//     host: 'by19b.h.filess.io',
//     user: 'facul_shouldfour',
//     password: 'b04abff50b5bcc476188ef0ba0b940d953ff3787',
//     database: 'facul_shouldfour',
//     port: '3307',
// })

// db.connect(err => {
//     if (err) throw err;
//     console.log("conectado ao banco");
// });

var mysql = require("mysql2");

var hostname = "by19b.h.filess.io";
var database = "facul_shouldfour";
var port = "3307";
var username = "facul_shouldfour";
var password = "b04abff50b5bcc476188ef0ba0b940d953ff3787";

var con = mysql.createConnection({
  host: hostname,
  user: username,
  password,
  database,
  port,
});

con.connect(function (err) {
  if (err) throw err;
  console.log("Connected!");
});

con.query("SELECT 1+1").on("result", function (row) {
  console.log(row);
});


module.exports = con;