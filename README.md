# Push_swap_automata 🇪🇸
Este proyecto ordena datos en un stack con un conjunto limitado de instrucciones, y utilizando el menor número posible de acciones.
En este caso he utiizado un automata para comprobar si lo que entra por terminal es valido o no.


## 🧠 Descripción

El programa recibe una lista de números enteros desordenados y debe ordenarlos usando solo dos pilas (stack A y stack B) y un conjunto definido de instrucciones (`sa`, `sb`, `pa`, `pb`, `ra`, `rb`, `rra`, `rrb`, etc.). El objetivo es realizar la ordenación con la menor cantidad de movimientos posible.


## ✨ Características principales

- Soporte para ordenar listas de números enteros
- Utiliza solo operaciones específicas sobre pilas
- Implementa algoritmos de ordenación optimizados para minimizar movimientos
- Control y validación de inputs
- Manejo de errores y mensajes claros


## ⚙️ Instalación

Clona el repositorio y compílalo usando `make`:

```bash
git clone https://github.com/Pablo-VH/Push_swap.git
cd Push_swap
make
```

## ▶️ Uso

Ejecuta el programa pasando la lista de números como argumentos:

```bash
./push_swap 3 2 5 1 4
```


## 📦 Requisitos

- Sistema UNIX (Linux o macOS)
- `gcc` y `make`

---

# Push_swap_automata 🇬🇧

This project organises data in a stack with a limited set of instructions, using as few actions as possible.
In this case, I have used an automaton to check whether the input from the terminal is valid or not.


## 🧠 Description

The programme receives a list of unsorted integers and must sort them using only two stacks (stack A and stack B) and a defined set of instructions (`sa`, `sb`, `pa`, `pb`, `ra`, `rb`, `rra`, `rrb`, etc.). The goal is to perform the sorting with as few moves as possible.


## ✨ Main features

- Support for sorting lists of integers
- Uses only specific stack operations
- Implements optimised sorting algorithms to minimise moves
- Input control and validation
- Error handling and clear messages


## ⚙️ Installation

Clone the repository and compile it using `make`:

```bash
git clone https://github.com/Pablo-VH/Push_swap.git
cd Push_swap
make
```

## ▶️ Usage

Run the program by passing the list of numbers as arguments:

```bash
./push_swap 3 2 5 1 4
```


## 📦 Requirements

- UNIX system (Linux or macOS)
- `gcc` and `make`
