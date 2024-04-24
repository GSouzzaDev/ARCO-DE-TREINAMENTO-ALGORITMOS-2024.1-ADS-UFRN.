/* 28. Calcule as raízes de uma equação de 2º grau. Observe que:
• x = -b ± v?/2a, onde ? = B2 - 4ac;
• ax2 + bx + c = 0 representa uma equação de 2º grau;
• A variável a tem que ser diferente de zero. Caso seja igual, escreva a mensagem “Não é equação de
segundo grau”;
• Se ? < 0, não existe real. Escreva a mensagem “Não existe raiz”;
• Se ? = 0, existe uma raiz real. Escreva a raiz e a mensagem “Raiz única”;
• Se ? = 0, escreva as duas raízes reais.*/

#include <iostream>

using namespace std;

int main() {
    float a, b, c, raiz, raiz1, raiz2, discriminante;
    
    cout << "Digite os coeficientes da equação de segundo grau (ax^2 + bx + c = 0):" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    
    if (a == 0) {
        cout << "Não é uma equação de segundo grau." << endl;
    } else {
        // Calcula o discriminante
        discriminante = b * b - 4 * a * c;

        
        if (discriminante < 0) {
            cout << "Não existe raiz real." << endl;
        } else if (discriminante == 0) {
            
            raiz = -b / (2 * a);
            cout << "Raiz única: " << raiz << endl;
        } else {
           
            raiz1 = (-b + discriminante) / (2 * a);
            raiz2 = (-b - discriminante) / (2 * a);
            cout << "As raízes são: " << raiz1 << " e " << raiz2 << endl;
        }
    }

    return 0;
}
