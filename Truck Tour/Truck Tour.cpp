
int truckTour(vector<vector<int>> list)
{
    int can_move = 0 ;
    int index = 999;
    int p = 0;
    for (int i = 0; i < list.size(); i++)
    {
        if (list[i][0] >= list[i][1])
        {
            if (index == 999) 
			{
            index = i;
            p = index;
            }
            can_move += list[i][0] - list[i][1];
            continue;
        }
        if (list[i][0] < list[i][1] && can_move !=0)
        {
            can_move =can_move + list[i][0] - list[i][1];
        }
        if (can_move < 0)
        {
            can_move = 0;
            i = p + 1;
            index = 999;
        }


    }
    return index;
}