#include "General.h"
struct Node
{
    General* PtrGen;
    Node* next;

    Node(General* g): PtrGen(g), next(nullptr){}
    ~Node(){
        delete PtrGen;
        cout << "Destructor Node" << endl;
        
        system("pause");
    }
};