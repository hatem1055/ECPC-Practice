string encryption(string s) 
{
    int rows, columns;
    string no_spaces;
    // Removing spaces from text
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            continue;
        }
        else
        {
            no_spaces += s[i];
        }
    }

    
    double sqrt_characters = sqrt(no_spaces.length());
    double character = round(sqrt_characters);
    //   5.3                    5
    if (sqrt_characters - character > 0)
    {
        rows = sqrt_characters;
        columns = rows + 1;
    }
    //        5.6                 6
    if (sqrt_characters - character < 0 )
    {
        columns = character;
        rows = columns - 1;
    }
    if (sqrt_characters - character == 0)
    {
        rows = character;
        columns = rows ;
    }

    while (rows * columns < no_spaces.length())
    {
        rows++;
    }

    
    no_spaces += ' ';
    string semi_final;
    int p = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (no_spaces[p] ==  ' ')
            {
                break;
            }
            semi_final += no_spaces[p++];
        }

        semi_final += '\n';
    }
     
    string final; 
    for (int i = 0; i < columns; i++)
    {    
        p = 0;
        for (int j = 0; j < rows; j++)
        {
            if (!isalpha(semi_final[i+p]))
            {
                break;
            }
            //cout << i + p << endl;
            final += semi_final[i + p];
            p += columns + 1;
            
        }
        final += ' ';
        
         
    }


    return final;
}