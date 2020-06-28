#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const std::string str)

{
    double num_g;
    double num_c;
    double dna_length;
    double gc_content;
    num_g = 0.0;
    num_c = 0.0;
    dna_length = 0.0;
    gc_content = 0.0;

    for(std::size_t i=0; i < str.size(); ++i)
       { if(str[i] == 'G')
           { num_g ++;
            dna_length ++;}
        else if(str[i] == 'C')
            {num_c ++;
            dna_length ++;}
        else 
            {dna_length ++;}
       }
    
    gc_content = (num_g + num_c)/dna_length;
    return gc_content;

}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

std::string get_reverse_string(std::string str)
{
    std::string reverse;
    reverse = "";
    for (std::size_t i = str.size(); i > 0; --i)
        {
           reverse.push_back(str[i-1]);
        }
    return reverse;
}

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
std::string get_dna_complement(std::string dna)
{
  std::string str = get_reverse_string(dna);

  for(std::size_t i = 0; i < dna.length(); i++)
  {
    if(str[i] == 'A')
    {
      str[i] = 'T';
    }
    else if(str[i] == 'T')
    {
      str[i] = 'A';
    }
    else if(str[i] == 'G')
    {
      str[i] = 'C';
    }
    else
    {
      str[i] = 'G';
    }
  }
  return str;

}
