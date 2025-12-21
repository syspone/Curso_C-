# 📚 Curso de C++ - Projeto de Estudo

Este repositório contém os códigos e exemplos desenvolvidos durante o curso de C++.

## 📋 Conteúdo do Curso

### 1. **Fundamentos da Linguagem C++**
- Estrutura básica de um programa
- Tipos de dados primitivos
- Operadores aritméticos, relacionais e lógicos
- Entrada e saída (`cin`, `cout`)
- Comentários e documentação

### 2. **Controle de Fluxo**
- Estruturas condicionais: `if`, `else`, `switch`
- Laços de repetição: `for`, `while`, `do-while`
- Instruções `break`, `continue`, `return`

### 3. **Funções**
- Declaração e definição de funções
- Parâmetros e valores de retorno
- Sobrecarga de funções
- Parâmetros padrão
- Recursividade

### 4. **Arrays e Strings**
- Arrays unidimensionais e multidimensionais
- Strings em C (char arrays)
- Classe `string` da STL
- Manipulação de strings

### 5. **Ponteiros e Referências**
- Conceito de ponteiros
- Aritmética de ponteiros
- Ponteiros e arrays
- Referências (`&`)
- Alocação dinâmica de memória: `new` e `delete`

### 6. **Programação Orientada a Objetos**
- Classes e objetos
- Encapsulamento (modificadores: `public`, `private`, `protected`)
- Construtores e destrutores
- Sobrecarga de operadores
- Herança e polimorfismo
- Classes abstratas e interfaces
- Funções virtuais

### 7. **Templates**
- Funções templates
- Classes templates
- Especialização de templates

### 8. **Standard Template Library (STL)**
- **Containers**: `vector`, `list`, `map`, `set`, `queue`, `stack`
- **Iteradores**: conceito e utilização
- **Algoritmos**: `sort`, `find`, `copy`, etc.
- **Functors** (objetos função)
- **Lambdas** (C++11+)

### 9. **Tratamento de Exceções**
- `try`, `catch`, `throw`
- Exceções padrão e customizadas
- Stack unwinding

### 10. **Recursos Avançados (C++11/14/17/20)**
- `auto` type inference
- Range-based for loops
- Smart pointers: `unique_ptr`, `shared_ptr`, `weak_ptr`
- Move semantics (rvalue references)
- `constexpr` e `noexcept`
- Initializer lists
- Structured bindings (C++17)
- Concepts (C++20)

### 11. **Gerenciamento de Arquivos**
- Streams de arquivo: `ifstream`, `ofstream`, `fstream`
- Leitura e escrita de arquivos
- Modos de abertura de arquivos

### 12. **Boas Práticas e Padrões**
- Convenções de nomenclatura
- Organização de código
- Princípios SOLID
- Design Patterns comuns em C++
- Otimização e performance

## 🛠️ Estrutura do Projeto

```
projeto-cpp/
│
├── src/                    # Códigos fonte
│   ├── fundamentos/       # Exemplos básicos
│   ├── poo/              # Programação Orientada a Objetos
│   ├── stl/              # Standard Template Library
│   └── avancado/         # Tópicos avançados
│
├── include/               # Arquivos de cabeçalho
├── build/                 # Arquivos de compilação
├── docs/                  # Documentação
└── README.md              # Este arquivo
```

## 📝 Como Compilar e Executar

### Compilação manual (g++):
```bash
g++ -std=c++17 -o programa arquivo.cpp
./programa
```

### Usando CMake:
```bash
mkdir build && cd build
cmake ..
make
./meu_programa
```

## 🔧 Requisitos

- Compilador C++ (g++ 7.0+ ou clang++ 5.0+)
- CMake (opcional, para projetos maiores)
- Conhecimentos básicos de programação

## 🎯 Objetivos de Aprendizado

Ao final deste curso, você será capaz de:

- ✅ Escrever programas C++ eficientes e bem estruturados
- ✅ Implementar conceitos de programação orientada a objetos
- ✅ Utilizar a STL de forma eficaz
- ✅ Gerenciar memória corretamente
- ✅ Aplicar padrões de projeto comuns
- ✅ Escrever código moderno (C++11/14/17/20)

## 📚 Recursos Adicionais

- [C++ Reference](https://en.cppreference.com/w/)
- [ISO C++ Foundation](https://isocpp.org/)
- [LearnCPP](https://www.learncpp.com/)
- [C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines)

## 📄 Licença

Este projeto é para fins educacionais. Sinta-se à vontade para usar e modificar o código.

---

*Atualizado em: $(date)*
*Próximo tópico: [inserir próximo tópico aqui]*
