//partition process of quicksort
void rearrange(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}

//two pointer
void rearrange(int arr[], int left,
              int right)
{
  while (left<=right)
  {
    if (arr[left] < 0 && arr[right] < 0)
      left+=1;
     
    else if (arr[left]>0 && arr[right]<0)
    {
      int temp=arr[left];
      arr[left]=arr[right];
      arr[right]=temp;
      left+=1;
      right-=1;
    }
     
    else if (arr[left]>0 && arr[right] >0)
      right-=1;
    else{
      left += 1;
      right -= 1;
    }
  }
}

// Dutch National Flag Algorithm
void rearrange(int[] ar)
    {
        int low = 0;
        int high = ar.length - 1;
        while (low <= high) {
            if (ar[low] <= 0)
                low++;
            else
                swap(ar, low, high--);
        }
    }