int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, y, x, z,v,w;


string isValid(string str)
{
    for (int counter = 0; counter <str.length(); counter++)
    {
        switch (tolower(str[counter]))
        {
        case 'a':
            a++;
            break;  
        case 'b' :
            b++;
            break;
        case 'c':
            c++;
            break;
        case 'd':
            d++;
            break;
        case 'e':
            e++;
            break;
        case 'f':
            f++;
            break;
        case 'g':
            g++;
            break;
        case 'h':
            h++;
            break;
        case 'i':
            i++;
            break;
        case 'j':
            j++;
            break;
        case 'k':
            k++;
            break;
        case 'l':
            l++;
            break;
        case 'm':
            m++;
            break;
        case 'n':
            n++;
            break;
        case 'o':
            o++;
            break;
        case 'p':
            p++;
            break;
        case 'q':
            q++;
            break;
        case 'r':
            r++;
            break;
        case 's':
            s++;
            break;
        case 't':
            t++;
            break;
        case 'w':
            w++;
            break;
        case 'v':
            v++;
            break;
        case 'z':
            z++;
            break;
        case 'x':
            x++;
            break;
        case 'u':
            u++;
            break;
        case 'y':
            y++;
            break;
        
        default:
            break;
        }
    }
    vector<int> sorted;
    string final;
    
    
    for (auto& var : { std::ref(a), std::ref(b), std::ref(c), std::ref(d), std::ref(e), std::ref(f)
            ,std::ref(g), std::ref(h), std::ref(i), std::ref(j), std::ref(k)
            ,std::ref(l), std::ref(m), std::ref(n), std::ref(o), std::ref(p), std::ref(q)
            ,std::ref(r), std::ref(s), std::ref(t), std::ref(u), std::ref(y), std::ref(z)
            ,std::ref(v), std::ref(x),std::ref(t)  }) 
        {    
            sorted.push_back(var);

        }
        sort(sorted.begin(), sorted.end());
        
        int is_valid = 0;
        reverse(sorted.begin() , sorted.end());
        if (sorted[0] - sorted[1] == 1)
        {
            is_valid += 1;
            for (int i = 0; i < sorted.size(); i++)
                if (sorted[i] < sorted[1] && sorted[i] != 0)
                    is_valid = 300;
        }
        if (sorted[0] - sorted[1] == 0)
        {
            for (int i = 0; i < sorted.size(); i++)
                if (sorted[i] != sorted[0] && sorted[i] != 0 && sorted[i] == 1 && sorted[i+1] ==1)
                    is_valid = 100;
        }
        if (sorted[0] - sorted[1] > 1)
        {
            is_valid = 200;
        }
        

        if (is_valid > 1)
            final = "NO";
        else
            final = "YES";


       
      return final;
    
    
 
}