#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack <int> pilha1, pilha2;
    int i;

    for (i = 0; i < 10; i++) {
        pilha1.push(i);
    }

    
    for (i = 0; i < 10; i++) {
        cout << pilha1.top() << endl;
        pilha2.push(pilha1.top());
        pilha1.pop();
    }

    cout << endl;

    for (i = 0; i < 10; i++) {
        cout << pilha2.top() << endl;
        pilha2.pop();
    }    


    return 0;
}
