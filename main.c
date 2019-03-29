#include "System.h"
#include "Scanner.h"

int main()
{
    System.out.print("input: ");
    
    Scanner scanner = new_Scanner(System.in);
    int n = scanner.nextInt();

    System.out.printf("echo : %d", n);
    System.out.println("");
}