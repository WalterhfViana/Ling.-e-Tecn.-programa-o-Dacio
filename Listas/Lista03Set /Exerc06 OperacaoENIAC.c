#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    printf("codigo gerado com IA, nao consegui entender qual conta exatamente fazer.");
    // 1. Constantes do problema
    const double g = 9.8;
    const double k = 0.5;
    const double dt = 0.01;

    // 2. Variáveis de entrada e física
    double v0, theta_graus;
    double x = 0.0, y = 0.0, t = 0.0;
    double vx, vy, rad;

    // 3. Leitura das entradas
    printf("Velocidade Inicial (v0): ");
    scanf("%lf", &v0);
    printf("Ângulo (θ) em graus: ");
    scanf("%lf", &theta_graus);

    // 4. Conversão do ângulo para radianos
    rad = theta_graus * (M_PI / 180.0);

    // 5. Componentes iniciais da velocidade
    vx = v0 * cos(rad);
    vy = v0 * sin(rad);

    // 6. Loop de Tempo (Executa o primeiro passo e continua enquanto y > 0)
    do {
        // Atualiza as posições (X e Y)
        x += vx * dt;
        y += vy * dt;

        // Atualiza as velocidades com a resistência do ar e gravidade
        vx += (-k * vx) * dt;
        vy += (-g - k * vy) * dt;

        // Incrementa o tempo do relógio
        t += dt;

    } while (y > 0.0);

    // 7. Saída dos resultados formatados
    printf("\n--- RESULTADOS ---\n");
    printf("Alcance Máximo: %.2f metros\n", x);
    printf("Tempo de Voo: %.2f segundos\n", t);

    return 0;
}
