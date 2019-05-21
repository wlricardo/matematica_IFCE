// FUNÇÃO PROGRESSÃO ARITMÉTICA
void progAritmetica(int qtd_termos, int termo_inicial, int razao)
{
    int i;
    for (i = 0; i < qtd_termos; i++)
    {
        printf("%d, ", termo_inicial);
        termo_inicial += razao;
    }
    printf(" %d\n", termo_inicial);
}

// FUNÇÃO PROGRESSÃO GEOMÉTRICA
void progGeometrica(int qtd_termos, int termo_inicial, int razao)
{
    int i;
    for (i = 0; i < qtd_termos; i++)
    {
        printf("%d, ", termo_inicial);
        termo_inicial *= razao;
    }
    printf(" %d\n", termo_inicial);
}

// FUNÇÃO EXPONENCIAL
float exponencial(float base, int expoente)
{
    int e = 1, i;
    for (i = 0; i < expoente; i++)
        e *= base;
    return e;
}

// FUNÇÃO FATORIAL
void fatorial(int valor)
{
    int f = 1, i;
    for (i = 1; i < valor; i++)
    {
        f *= i;
        printf("%d x ", i);
    }
    printf("%d = %d\n",i, f*valor);
}

// FUNÇÃO FIBONACCI
void fibonacci(int valor)
{
    int i, aux = 0;
    int primeiro = 0, segundo = 1;
    for (i = 0; i < valor-1; i++)
    {
        if (i == 0 || i == 1)
            printf("%d, ", i);
        else
        {
            aux = primeiro + segundo;
            primeiro = segundo;
            segundo = aux;
            printf("%d, ", segundo);
        }
    }
    aux = primeiro + segundo;
    primeiro = segundo;
    segundo = aux;
    printf("%d\n", segundo);
}

// FUNÇÃO M.D.C.
int mdc(int a, int b)
{
    int resto = 0;
    do {
        resto = a % b;
        a = b;
        b = resto;
    } while (b != 0);
    return a;
}

// FUNÇÃO M.M.C
int mmc(int a, int b)
{
    return (a * b)/mdc(a, b);
}

// FUNÇÃO MOSTRAR DIVISORES
void mostrar_divisores(int valor)
{
    int i;
    for (i = 1; i < valor/2 + 1; i++)
    {
        if (valor % i == 0)
            printf("%d, ", i);
    }
    printf("%d\n", valor);
}

// FUNÇAO PARA CONTAR DIVISORES

int contar_divisores(int valor)
{
    int n = 1;
    int i;
    for (i = 1; i < valor/2 + 1; i++)
    {
        if (valor % i == 0)
            n++;
    }
    return n;
}

// FUNÇÃO PARA VERIFICAR SE UM NÚMERO É PRIMO
int numero_primo(int valor)
{
    int i;
    for (i = 2; i < valor/2 + 1; i++)
    {
        if (valor % i == 0)
            return 0;
    }
    return 1;
}
