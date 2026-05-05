#include <iostream>

using namespace std;


void  insertionSort (int v[], int n)	//n C) tamanho do vetor
{
  int i = 0;
  int j = 1;
  int aux = 0;
  while (j < n)
    {
      aux = v[j];
      i = j - 1;

      while ((i >= 0) && (v[i] > aux))
	{
	  v[i + 1] = v[i];
	  i = i - 1;
	}

      v[i + 1] = aux;
      j = j + 1;
    }
}


void selectionSort (int v[], int n)
{				//n C) tamanho do vetor
  int i, j, min, aux;
  for (i = 0; i < (n - 1); i++)
    {
      min = i;
      for (j = (i + 1); j < n; j++)
	{
	  if (v[j] < v[min])
	    min = j;
	}
      if (v[i] != v[min])
	{
	  aux = v[i];
	  v[i] = v[min];
	  v[min] = aux;
	}
    }
}

void bubbleSort (int v[], int n)
{				//n C) tamanho do vetor
  int i, fim, aux;
  for (fim = n - 1; fim > 0; --fim)
    {
      for (i = 0; i < fim; ++i)
	{
	  if (v[i] > v[i + 1])
	    {
	      aux = v[i];
	      v[i] = v[i + 1];
	      v[i + 1] = aux;
	    }
	}
    }
}

void merge (int vetor[], int inicio, int meio, int fim)
{
  int com1 = inicio, com2 = meio + 1, comAux = 0, vetAux[fim - inicio + 1];
  while (com1 <= meio && com2 <= fim)
    {
      if (vetor[com1] <= vetor[com2])
	{
	  vetAux[comAux] = vetor[com1];
	  com1++;
	}
      else
	{
	  vetAux[comAux] = vetor[com2];
	  com2++;
	}
      comAux++;
    }
  while (com1 <= meio)
    {				//Caso ainda haja elementos na primeira metade
      vetAux[comAux] = vetor[com1];
      comAux++;
      com1++;
    }
  while (com2 <= fim)
    {				//Caso ainda haja elementos na segunda metade
      vetAux[comAux] = vetor[com2];
      comAux++;
      com2++;
    }
  for (comAux = inicio; comAux <= fim; comAux++)
    {				//Move os elementos de voltapara o vetor original
      vetor[comAux] = vetAux[comAux - inicio];
    }
}

void mergeSort (int vetor[], int inicio, int fim)
{
  if (inicio < fim)
    {
      int meio = (inicio + fim) / 2;
      mergeSort (vetor, inicio, meio);
      mergeSort (vetor, meio + 1, fim);
      merge (vetor, inicio, meio, fim);
    }
}


int main ()
{
  int v[6] = { 3, 5, 1, 4, 1, 6 };

  mergeSort (v, 0,5);

  for (int i = 0; i <= 5; i++)
    {
      cout << v[i] << endl;
    }
  return 0;
}
