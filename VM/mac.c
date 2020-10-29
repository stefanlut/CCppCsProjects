#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 256

void print_stack();
int fetch();
void eval(int instr);
void print_registers();
int find_empty_register();

static int stack[STACK_SIZE];
int ip = 0;
int sp = -1;
int stack[256];
static bool running = true;

typedef enum{
    HLT, // halts program
    PSH, // pushes value to stack
    POP, // pops value from stack
    ADD, // adds two values from top of stack
    MUL, // multiplies two values from top of stack
    DIV, // divides two values from top of stack
    SUB, // subtracts two values from top of stack
    SLT, // pushes reg_a < reg_b to stack
    MOV, // moves value in reg_a to reg_b
    SET, // sets the reg to value
    LOG, // prints out a
    IF, // if register == value branch to ip
    IFN, // if register != value branch to ip
    GLD, // loads register to stack
    GPT, // pushes top of stack to given register
    NOP // no operation
    
} Instructions;
typedef enum{
    A,B,C,D,E,F, I, J,
    EX,
    EXA,
    IP,
    SP,
    REGISTER_SIZE
} Registers;
static int registers[REGISTER_SIZE];
int *instructions;
int intstruction_count = 0;
int instruction_space = 4;
bool is_jmp = false;

#define SP (Registers[SP])
#define IP (Registers[IP])
#define FETCH (Instructions[IP])


const int program[] = {
    PSH,5,
    PSH,6,
    ADD,
    POP,
    HLT
};

int main(){
    while(running){
        eval(fetch());
        ip++;
    }
    return 0;


}

int fetch(){

    return program[ip];
}
void eval(int instr){
    switch(instr){
        case HLT:{
        running = false;
        break;
        }
        case PSH:{
        sp++;
        stack[sp] = program[++ip];
        break;
        }
        case POP:{
            int val_popped = stack[sp--];
            printf("popped %d\n", val_popped);
            break;
        }
        case ADD:{
            int a = stack[sp--];
            int b = stack[sp--];
            int result = b + a;
            sp++;
            stack[sp] = result;
            break;

        }
    }
}