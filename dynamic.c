
void dynamic(int course_number_6,int course_number_4 ,int p[])
{
int v[100][100],x[10],i,j;
    for(i=0;i<= course_number_4;i++)
    v[0][i]=0;
        for(i=1;i<=course_number_6;i++)
        {
            for(j=0;j<= course_number_4;j++)
            {
                if(j>=1)
                v[i][j]=max(v[i-1][j],v[i-1][j-1+p[i]);
                else
                v[i][j]=v[i-1][j];
            }
}


for(i=1;i<=course_number_6;i++)
x[i]=0;
i=course_number_6;
j=course_number_4;
    while(i>0 && j>0)
    {
    if(v[i][j]!=v[i-1][j])
    {
    x[i]=1;
    j=j-1;
    }
    i--;
    }
}