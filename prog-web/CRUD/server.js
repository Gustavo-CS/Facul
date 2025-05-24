const express = require('express');
const app = express();
const port = 3001;

const db = require("./db")

app.get('/', (req, res) => {
    res.send('Servidor funcionando');
})

app.listen(port, ()=> {
    console.log(`servidor rodando na porta ${port}`)
})