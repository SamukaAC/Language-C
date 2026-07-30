#include <stdio.h>

int main (void) 
{
    int total_de_disciplinas, disciplina, carga_horaria, presenca, listas, faltas, ausente, quantidade_faltas;
    double frequencia, nota1, nota2, nota3, media;

    scanf("%d", &total_de_disciplinas);
    disciplina = 1;

    while (disciplina <= total_de_disciplinas) {
        scanf("%d", carga_horaria);
        listas = (carga_horaria / 2);
        faltas = 0;

        for (quantidade_faltas = 0; quantidade_faltas < listas; quantidade_faltas++) {
            scanf("%d", &ausente);
            if(ausente == 1) {
                faltas++;
            }
        }

        scanf("%lf %lf %lf", &nota1, &nota2, &nota3);
        media = (((nota1 + nota2) + nota3) / 3.0);
        presenca = listas - faltas; 
        frequencia = ((double)presenca / listas);

        if (frequencia < 0.75) {
            printf("Disciplina %d: RF\n");
        } else if (media < 5.0) {
            printf("Disciplina %d: RN\n");
        } else {
            printf("Disciplina %d: AP\n");
        }
        disciplina++;
    }
    return 0;
}