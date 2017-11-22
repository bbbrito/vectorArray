#include <stdlib.h>
#include <ctime>
#include <iostream>
using std::cout;
using std::cin;
#include <vector>
using std::vector;

bool trocar ( int &, int & );
bool trocar ( double &, double & );
void outputVector( const vector< double > & );
void bubbleSort( vector< double > & );
void fillVector( vector< double > & );
void imprimeVetor ( vector< double > & );



int main( )
{
    
    int size = 0;
    double mydoub = 0;
    srand( ( int ) time ( 0 ) );
    vector< double > vetorFinal;


    fillVector( vetorFinal );
    imprimeVetor( vetorFinal );
    
    bubbleSort( vetorFinal );
    imprimeVetor( vetorFinal );
    
    int myArray[ vetorFinal.size() ];
    
    for(int i = 0; i < vetorFinal.size( ); i++)
        myArray[ i ] = vetorFinal[ vetorFinal.size( ) - 1 - i ];
        
    cout << "Os valores do Array sao: " << '\n';
    for (int i = 0; i < vetorFinal.size( ); i++)
        cout << myArray[ i ] << '\n';
        
    cout << '\n';
        
    while( !vetorFinal.empty( ) )
    {
        vetorFinal.pop_back( );
        
         for (int i = 0; i < vetorFinal.size( ); i++)
            cout << vetorFinal[ i ] << '\t';
            
         cout << '\n';
    }
        
    
    
    system ("pause"); 
    return 0;

}


void bubbleSort( vector< double > & vetor)
{
    const int NITER = 5;
    int count = 0; 
    
    for (int i = 0; i < NITER - 1; i++)
    {
        for(int j = 1; j < vetor.size( ); j++)
        {
            trocar( vetor[ j ], vetor[ j - 1 ] );
            count++;
        }
    }
        
    cout << "Total de trocas: " << count << '\n';
    

}

void fillVector( vector< double > & vetor )
{
    
    char pergunta;
    do
    {        
        vetor.push_back( 100.0 * double(1 + rand() % 30) / 30.0 );      
        cout << "Deseja continuar? Se sim, digite 'S'. Se não, digite 'N': " << '\n';
        cin >> pergunta;
        
    } while ( pergunta == 'S' );
}


bool trocar ( int & x, int & y )
{
    
    int temp;
    if( x > y )
    {

        temp = x;
        x = y;
        y = temp;
        return true;
    }
    else 
        return false;
}

bool trocar ( double & x, double & y )
{
    double temp;
    if( x > y )
    {    
        temp = x;
        x = y;
        y = temp;
        return true;
    }
    else 
        return false;
}

void inteiro1( vector< int > & inteiro )
{
    srand( ( int ) time ( 0 ) );
    for ( int k = 0; k < inteiro.size(); k++)
        inteiro[ k ] = 1 + (rand() % 10);
}


void imprimeVetor( vector< double > & vetor )
{
    cout << "Os valores do Vetor sao: " << '\n';
    for (int i = 0; i < vetor.size( ); i++)
        cout << vetor[ i ] << '\n';
}
