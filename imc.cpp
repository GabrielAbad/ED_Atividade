#include <iostream>
#include <utility> // Para std::pair
using std::cout;
using std::cin;
using std::endl;
using std::pair;

float imc(pair<float, float> info){
    float m = info.first;
    float a = info.second;
    float imc = m / (a * a);
    return imc;
}

int main(){
    float m, a;
    cout << "Digite o peso em kg e altura em metros (separados por blankspace): ";
    cin >> m >> a;
    
    pair<float, float> info = std::make_pair(m, a);
    
    float fImc = imc(info);
    cout << "Resultado de acordo com a tabela de IMC: "<< endl;
    
    if(fImc < 17) cout << "Muito abaixo do peso";
    else if(fImc < 18.5) cout << "Abaixo do peso";
    else if(fImc < 25) cout << "Peso normal";
    else if(fImc < 30) cout << "Acima do peso";
    else if(fImc < 35) cout << "Obesidade";
    else if(fImc < 40) cout << "Obesidade severa";
    else cout << "Obesidade morbida";
    
    return 0;
}