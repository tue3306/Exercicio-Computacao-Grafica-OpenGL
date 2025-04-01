# - 📌 Exercícios de Computação Gráfica com OpenGL  

## - 🎯 Objetivo  
- Este projeto tem como objetivo aplicar os conceitos de OpenGL em C++  
- Desenvolver uma série de exercícios práticos para criar e manipular gráficos 2D  
- Incluir formas geométricas, animações e interatividade  
- Conforme especificado na lista de exercícios da disciplina de Computação Gráfica do Centro Universitário de Brasília  

## - 🚀 Funcionalidades  

- Recriar um Desenho - Reproduzir fielmente um desenho geométrico simples (sem quinas arredondadas)  
- Desenhar um Símbolo - Renderizar um símbolo específico na tela  
- Quadrado Vermelho com Translação - Desenhar um quadrado vermelho que se move para cima (eixo Y positivo) ao pressionar a barra de espaço  
- Animação de Quadrado Roxo - Criar um quadrado roxo que se move continuamente de um lado para o outro no eixo X  
- Círculo Multicolorido Girando - Desenhar um círculo com gradiente de cores que gira no sentido horário sem parar  

## - 📝 Exemplos de Uso  

### - 🖌️ Exercício 1 - Recriar um Desenho  
- Descrição: Renderiza um desenho geométrico (exemplo: triângulo com linhas internas)  
- ```cpp
- glBegin(GL_TRIANGLES);
- glVertex2f(0.0, 0.5);   // Topo
- glVertex2f(-0.5, -0.5); // Esquerda
- glVertex2f(0.5, -0.5);  // Direita
- glEnd();
- ```
- Resultado: Um triângulo branco aparece na tela com fundo preto *(Ajuste conforme o desenho real)*  

### - 🎨 Exercício 2 - Desenhar um Símbolo  
- Descrição: Renderiza um símbolo (exemplo: símbolo da paz)  
- ```cpp
- glBegin(GL_LINE_LOOP); // Círculo
- for (int i = 0; i < 100; i++) {
-     float angle = 2.0f * 3.14159f * i / 100;
-     glVertex2f(0.3 * cos(angle), 0.3 * sin(angle));
- }
- glEnd();
- ```
- Resultado: Um círculo amarelo com linhas internas formando o símbolo da paz *(Ajuste conforme o símbolo real)*  

### - 🔼 Exercício 3 - Quadrado Vermelho com Translação  
- Descrição: Quadrado vermelho que sobe ao pressionar a barra de espaço  
- ```cpp
- void keyboard(unsigned char key, int x, int y) {
-     if (key == ' ') {
-         yPos += 0.1; // Move para cima
-         glutPostRedisplay();
-     }
- }
- ```
- Resultado: O quadrado vermelho se desloca 0.1 unidade no eixo Y a cada pressão da barra de espaço  

### - ↔️ Exercício 4 - Animação de Quadrado Roxo  
- Descrição: Quadrado roxo em movimento contínuo no eixo X  
- ```cpp
- void update(int value) {
-     xPos += direction;
-     if (xPos > 0.8 || xPos < -0.8) direction = -direction; // Inverte direção
-     glutPostRedisplay();
-     glutTimerFunc(16, update, 0); // 60 FPS
- }
- ```
- Resultado: O quadrado roxo oscila entre as bordas da tela horizontalmente  

### - 🌈 Exercício 5 - Círculo Multicolorido Girando  
- Descrição: Círculo com gradiente de cores girando no sentido horário  
- ```cpp
- void update(int value) {
-     angle -= 1.0; // Rotação horária
-     glutPostRedisplay();
-     glutTimerFunc(16, update, 0); // 60 FPS
- }
- ```
- Resultado: Um círculo multicolorido gira continuamente no sentido horário  

## - ⚠️ Dificuldades Encontradas e Soluções  

### - 🔹 Controle de Limites na Tela  
- Os objetos (quadrado e círculo) poderiam sair dos limites da janela sem restrições  
- ✅ Solução: Adicionados limites no eixo X (Exercício 4) e reinício da posição no eixo Y (Exercício 3)  
- Mantém os objetos visíveis  

### - 🔹 Animação Suave  
- A animação poderia parecer travada sem controle de FPS  
- ✅ Solução: Usado glutTimerFunc com intervalo de 16ms (~60 FPS)  
- Garante fluidez nas animações (Exercícios 4 e 5)  

## - 📋 Instruções para Executar  
- Certifique-se de ter uma biblioteca OpenGL instalada (ex.: GLUT ou FreeGLUT)  
- Compile cada arquivo .cpp com um compilador C++ (ex.: g++ -o exercicio1 exercicio1.cpp -lglut -lGLU -lGL)  
- Execute o programa gerado (ex.: ./exercicio1)  
- Submeta os arquivos .cpp no Google Classroom conforme solicitado  
