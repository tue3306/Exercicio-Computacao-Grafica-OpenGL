 # 📌 Exercícios de Computação Gráfica com OpenGL  

## 🎯 Objetivo  
Este projeto tem como objetivo aplicar os conceitos de OpenGL em C++, por meio do desenvolvimento de uma série de exercícios práticos voltados à criação e manipulação de gráficos 2D, incluindo a implementação de formas geométricas, animações e elementos de interatividade.



## ⚠️ Dificuldades Encontradas e Soluções  

### 🔹 Controle de Limites na Tela  
Inicialmente, os objetos (quadrado e círculo) podiam sair dos limites da janela sem restrições. Como solução, foram adicionados limites no eixo X, conforme implementado no Exercício 4, e um reinício da posição no eixo Y, como apresentado no Exercício 3. Essas modificações garantem que os objetos permaneçam visíveis durante a execução.



## 📋 Instruções para Executar  
Para a execução dos exercícios, é necessário ter uma biblioteca OpenGL instalada, como GLUT ou FreeGLUT. Cada arquivo .cpp deve ser compilado utilizando um compilador C++, por exemplo, com o comando g++ -o exercicio1 exercicio1.cpp -lglut -lGLU -lGL. Após a compilação, o programa gerado pode ser executado com ./exercicio1. Por fim, os arquivos .cpp devem ser submetidos no Google Classroom conforme as instruções fornecidas.
