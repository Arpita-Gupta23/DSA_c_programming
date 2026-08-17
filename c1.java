class c1{
    public static void main(String ar[])
    {
        int i,j;
        for(i=1; i<=5; i++)
        {
            for(j=i; j<=5; j++)
            {
             if(i==1||j==i||j==5)
             {
              System.out.print(j+" ");
             }
             else{
                System.out.print("  ");
             }
            }
            System.out.println();
        }
    }
}