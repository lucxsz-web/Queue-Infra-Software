#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// 1. Queue básica
void exemploQueue() {
    cout << "=== QUEUE BASICA ===" << endl;
    queue<string> fila;
    
    fila.push("P1");
    fila.push("P2");
    fila.push("P3");
    
    while (!fila.empty()) {
        cout << "Processando: " << fila.front() << endl;
        fila.pop();
    }
    cout << endl;
}

// 2. Priority Queue
void exemploPriorityQueue() {
    cout << "=== PRIORITY QUEUE ===" << endl;
    priority_queue<int> pq;
    
    // Alta prioridade (1 = maior)
    pq.push(1); pq.push(1); pq.push(1); pq.push(1); pq.push(1);
    // Media prioridade (2)
    pq.push(2); pq.push(2); pq.push(2); pq.push(2); pq.push(2);
    // Baixa prioridade (3)
    pq.push(3); pq.push(3); pq.push(3); pq.push(3); pq.push(3);
    
    cout << "Ordem de execucao: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << "\n\n";
}

// 3. Round Robin
void roundRobin() {
    cout << "=== ROUND ROBIN ===" << endl;
    
    queue<pair<string, int>> processos;
    processos.push({"P1", 5});
    processos.push({"P2", 7});
    processos.push({"P3", 3});
    
    int quantum = 2;
    
    while (!processos.empty()) {
        auto processo = processos.front();
        processos.pop();
        
        string id = processo.first;
        int &tempoRestante = processo.second;
        int tempoExecutado = min(quantum, tempoRestante);
        
        tempoRestante -= tempoExecutado;
        
        cout << id << " executou " << tempoExecutado << " unidades (restam " << tempoRestante << ")" << endl;
        
        if (tempoRestante > 0) {
            processos.push(processo);
        }
    }
    cout << "Todos os processos foram concluidos!\n";
}

int main() {
    exemploQueue();
    exemploPriorityQueue();
    roundRobin();
    return 0;
}