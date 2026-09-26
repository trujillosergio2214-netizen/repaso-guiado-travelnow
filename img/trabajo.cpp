# include<iostream>
# include<string>

int main(){
    std::string nombre;

    std::cout<<"¿como te llamas?";

std::cin>>nombre;

std::cout << "que necesitas calcular? " ;

std::cout << nombre << std::endl;

double numero1;
double numero2;
double resultado;
std::cout << "ingresa el primer numero: " ;
std::cin >> numero1;

std::cout << "ingresa el segundo numero: " ;
std::cin >> numero2;

resultado = numero1 + numero2;
std::cout << "el resultado es: " << resultado << std::endl;





}