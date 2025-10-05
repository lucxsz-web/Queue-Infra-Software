# Implementação de Queues em C++

Este projeto demonstra três tipos diferentes de queues (filas) implementadas em C++.

## 📋 Estrutura do Projeto

### 1. Queue Básica
- Implementação FIFO (First In First Out)
- Operações: `push()` e `pop()`
- Exemplo simples com processos P1, P2, P3

### 2. Priority Queue
- Elementos com maior prioridade são processados primeiro
- Prioridades: 1 (alta), 2 (média), 3 (baixa)
- 5 elementos para cada nível de prioridade

### 3. Round Robin Scheduler
- Simulação de escalonamento de processos
- Quantum fixo de 2 unidades de tempo
- Processos retornam para a fila se não terminarem
- Exemplo com 3 processos: P1(5), P2(7), P3(3)

## 🚀 Como Executar

```bash
# Compilar
g++ -o queues main.cpp

# Executar
./queues
```

## 📊 Saída Esperada

```
=== QUEUE BASICA ===
Processando: P1
Processando: P2
Processando: P3

=== PRIORITY QUEUE ===
Ordem de execucao: 1 1 1 1 1 2 2 2 2 2 3 3 3 3 3 

=== ROUND ROBIN ===
P1 executou 2 unidades (restam 3)
P2 executou 2 unidades (restam 5)
P3 executou 2 unidades (restam 1)
P1 executou 2 unidades (restam 1)
P2 executou 2 unidades (restam 3)
P3 executou 1 unidades (restam 0)
P1 executou 1 unidades (restam 0)
P2 executou 2 unidades (restam 1)
P2 executou 1 unidades (restam 0)
Todos os processos foram concluidos!
```

## 🛠️ Tecnologias

- C++
- STL (Standard Template Library)
- queue, priority_queue

## 📝 Observações

- **Queue Básica**: Ordem de chegada determina a ordem de saída
- **Priority Queue**: Números menores indicam maior prioridade
- **Round Robin**: Garante fair sharing entre processos

## 👨‍💻 Autor

Desenvolvido para demonstração de conceitos de estruturas de dados e escalonamento de processos.
