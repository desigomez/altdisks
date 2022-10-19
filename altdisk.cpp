#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{

  std::cout << "Please enter n, the amount of disks of each color: ";
  int n;
  std::cin >> n;

  int array_size = 2 * n;

  int array[array_size];

  //creating array of 0, 1, 0, 1, 0, 1...

  for (int i = 0; i < array_size; i++)
  {
    if (i % 2 == 0)
    {
      array[i] = 0;
    }
    else
    {
      array[i] = 1;
    }
  }

  //output the first array

  std::cout << "Here is the array you created:\n";

  for (int j = 0; j < array_size; j++)
  {
    std::cout << array[j] << " ";
  }

  std::cout << "\n";

  //m = number of swaps

  int m = 0;

  //sort array

  for (int curr_loop = 0; curr_loop < (n - 1); curr_loop++)
  {
    for (int h = 0; h < (array_size - 1); h++)
    {
      if (array[h] > array[h+1])
      {
        int temp;
        temp = array[h+1];
        array[h+1] = array[h];
        array[h] = temp;
        m++;
      }
    }
  }

  //output sorted array

  std::cout << "Here is your sorted loop:\n";

  for (int k = 0; k < array_size; k++)
  {
    std::cout << array[k] << " ";
  }

  std::cout << "\nNumber of swaps: " << m << "\n";

  return 0;
}
