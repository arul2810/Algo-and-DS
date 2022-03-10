using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LinkedList
{
    internal class Program
    {
 

        static int add_list(int value, LinkedList <int> new_list)
        {
            new_list.AddLast(value);

            return 1;
        }

        static void print_list(LinkedList <int> new_list)
        {
            foreach( int value in new_list)
            {
                Console.WriteLine(value);
            }
        }

        static void Main(string[] args)
        {
            int flag = 1;
            LinkedList<int> new_list = new LinkedList<int>();

            while (flag == 1) {

                Console.WriteLine("Choose Your Option: 1. Add Value 2. Print List 3. Exit");
                int input_value;
                input_value = Convert.ToInt32(Console.ReadLine());

                if (input_value == 1)
                {
                    int to_add_list;
                    to_add_list = Convert.ToInt32(Console.ReadLine());
                    add_list(to_add_list, new_list);
                    Console.WriteLine("Added Success \n");
                }
                else if (input_value == 2)
                {
                    print_list(new_list);

                }
                else
                {
                    flag = 0;
                }
            }
        }
    }
}
