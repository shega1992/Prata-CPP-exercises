#include <iostream>
#include <cctype>
#include "stack.h"

void selected_stack(Stack &st);

int main()
{
    Stack st;
    Stack st2;
    char selection;
    std::cout << "Please enter 1 or 2 to select the stack or Q for exit: ";
    while(std::cin >> selection && selection != 'Q')
    {
        switch(selection)
        {
            case '1':
                selected_stack(st);
                break;
            case '2':
                selected_stack(st2);
                break;
            default:
                std::cout << "You've selected incorrect option\n";
                break;
        }
        std::cout << "Please enter 1 or 2 to select the stack or Q for exit: ";
    }
    std::cout << "stack 1:\n" << st;
    std::cout << "stack 2 before assignment:\n" << st2;
    // assignment
    st2 = st;
    std::cout << "stack 2 after assignment:\n" << st2;
    // initialization
    Stack st3 = st2;
    std::cout << "stack 3:\n" << st3;

    return 0;
}

void selected_stack(Stack & st)
{
    char ch;
    unsigned long po;
    std::cout << "Please enter A to add a purchase order,\n"
         << "P to process a PO, or Q to quit.\n";
    while (std::cin >> ch && toupper(ch) != 'Q')
    {
        while (std::cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            std::cout << '\a';
            continue;
        }
        switch(ch)
        {
           case 'A':
           case 'a': std::cout << "Enter a PO number to add: ";
                     std::cin >> po;
                     if (st.isfull())
                        std::cout << "stack already full\n";
                     else
                        st.push(po);
                     break;
            case 'P':
            case 'p': if (st.isempty())
                        std::cout << "stack already empty\n";
                      else {
                            st.pop(po);
                            std::cout << "PO #" << po << " popped\n";
                      }
                      break;
        }
        std::cout << "Please enter A to add a purchase order,\n"
                  << "P to process a PO, or Q to quit.\n";
    }
    std::cout << "Return to main menu\n";
}
