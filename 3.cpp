#include <iostream>
#include <iomanip>
using namespace std;

int N = INT16_MAX;

void minmax(int [] , int*);

void juntar(int[] , int[] , int* , int*);

void separar(int[] , int*);

int main()
{
    int x, y, i = 0 , v[N], w[N];
    cout << " insira o tamanho de um vetor e preencha-o: " << endl;
    cin >> x;
    for (int i = 0; i < x; i++){
        cin >> v[i];
    }
    minmax(v, &x);
    cout << "informe o tamanho de um primeiro vetor e preencha-o" << endl;
    cin >> x;
    for (int i = 0; i < x; i++){
        cin >> v[i];
    }
    cout << "agora, informe o tamanho de um segundo vetor e preencha-o" << endl;
    cin >> y;
    for (int i = 0; i < y; i++){
        cin >> w[i];
    }
    cout << "a juncao desses vetores eh: ";
    juntar( v , w , &x , &y);
    cout << "insira o tamanho de um vetor e preencha-o: " << endl;
    cin >> x;
    for (i = 0; i < x; i++){
        cin >> v[i];
    }
    separar(v , &x);
    return 0;
}

void minmax(int v[], int *x)
{
    int menor = INT16_MAX, maior = INT16_MIN;
    for (int i = 0; i < *x; i++){
        if(v[i] < menor){
            menor = v[i];
        }
        if(v[i] > maior){
            maior = v[i];
        }
    }
    cout << "o menor numero eh: " << menor << " e o maior eh : " << maior << endl;
}

void juntar(int v[] , int w[] , int *x , int *y)
{
    int i = 0;
    *y = *x + *y;
    for (i = *x; i < *y; i++){
        v[i] = w[*y - i - 1];
    }
    for (i = 0; i < *y; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void separar(int v[], int *x)
{
    int a = 0 , b = 0 , i , k[N] , l[N];
    for(i = 0; i < *x; i++){
        if(v[i] % 2 == 0 && v[i]){
            k[a] = v[i];
            a++;
        }
        else{
            l[b] = v[i];
            b++;
        }
    }
    cout << "o vetor de pares eh: ";
    for(i = 0; i < a; i++){
        cout << k[i] << " ";
    }
    cout << endl << "e o vetor de impares eh: ";
    for(i = 0; i < b; i++){
        cout << l[i] << " ";
    }
    cout << endl;
}
