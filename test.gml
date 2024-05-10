for(var i = 0; i < ds_grid_width(world); i++)
{
    for(var j = 0; j < ds_grid_height(world); j++)
    {
        var currSymbol = ds_grid_get(world,i,j);
        draw_set_colour(c_black);
        if(showIllegals && currSymbol != 0)
        {
            var currI;
            var currJ;
            var time = 1;

            currI = i;
            currJ = j;
            while(ds_grid_get(world,currI,currJ) == currSymbol)
            {
                if(time == 3)
                {
                    draw_line_width(i*32+16,j*32+16,currI*32+16,currJ*32+16,4);
                    break;
                }
                currI += 1;
                currJ += 1;
                time ++;
            }
            time = 1;
            currI = i;
            currJ = j;
            while(ds_grid_get(world,currI,currJ) == currSymbol)
            {
                if(time == 3)
                {
                    draw_line_width(i*32+16,j*32+16,currI*32+16,currJ*32+16,4);
                    break;
                }
                currI += 1;
                time ++;
            }
            time = 1;
            currI = i;
            currJ = j;
            while(ds_grid_get(world,currI,currJ) == currSymbol)
            {
                if(time == 3)
                {
                    draw_line_width(i*32+16,j*32+16,currI*32+16,currJ*32+16,4);
                    break;
                }
                currI += 1;
                currJ -= 1;
                time ++;
            }
            time = 1;
            currI = i;
            currJ = j;
            while(ds_grid_get(world,currI,currJ) == currSymbol)
            {
                if(time == 3)
                {
                    draw_line_width(i*32+16,j*32+16,currI*32+16,currJ*32+16,4);
                    break;
                }
                currJ += 1;
                time ++;
            }
        }
    }
}
