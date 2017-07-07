int BinaryFind(int* arr, int iLength, const int iValue)
{
	int iLeft = 0, iRight = iLength, iMid = -1;
	while(iLeft < iRight)
	{
		iMid = (iRight - iLeft) / 2 + iLeft;
		if(iValue == arr[iMid])
		{
			return iMid;
		}
		else if(iValue < arr[iMid])
		{
			iRight = iMid - 1;
		}
		else
		{
			iLeft = iMid + 1;
		}
	}
	return iMid;
}
