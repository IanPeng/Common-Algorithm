int FindPartation(int* arr, int iLeft, int iRight)
{
	if(iLeft < iRight)
	{
		int iFlagValue = arr[iLeft];
		while(iFlagValue < arr[iRight] && iLeft < iRight)
			--iRight;
		if(iLeft < iRight)
		{
			arr[iLeft] = arr[iRight];
			++iLeft;
		}
		while(arr[iLeft] < iFlagValue && iLeft < iRight)
			++iLeft;
		if(iLeft < iRight)
		{
			arr[iRight] = arr[iLeft];
			--iRight;
		}
		arr[iLeft] = iFlagValue;
	}
	return iLeft;
}

void QuickSort(int* arr, int iLeft, int iRight)
{
	int iFlag = FindPartation(arr, iLeft, iRight);
	QuickSort(arr, iLeft, iFlag-1);
	QuickSort(arr, iFlag+1, iRight);
}
