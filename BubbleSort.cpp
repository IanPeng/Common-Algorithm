// standard
void BubbleSort(int* arr, int iLength)
{
	for(int i = 0; i < iLength - 1; ++i)
	{
		for(int j = iLength - 1; j > i; --j)
		{
			if(arr[j-1] > arr[j])
			{
				int iTemp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = iTemp;
			}
		}
	}
}

// efficient
void BubbleSort(int* arr, int iLength)
{
	bool bSwap = true;
	for(int i = 0; i < iLength - 1 && bSwap; ++i)
	{
		bSwap = false;
		for(int j = iLength - 1; j > i; --j)
		{
			if(arr[j-1] > arr[j])
			{
				int iTemp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = iTemp;
				bSwap = true;
			}
		}
	}
}
