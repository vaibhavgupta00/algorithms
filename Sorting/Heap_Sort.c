/*
 *	function to make heap of an array
 *	@param arr[] array to make heap from
 *	@param size size of array passed
 *	@param i
 *	@return void
 */
void heapify(int arr[], int size, int i)
{	
	int largest = i; 
	int left = 2*i + 1;
	int right = 2*i + 2;

	if(left < size && arr[left] > arr[largest])
		largest = left;

	if(right < size && arr[right] > arr[largest])
		largest = right;

	if(largest != i)
	{
		swap(&arr[i], &arr[largest]);
		
		heapify(arr, size, largest);
	}
}

/*	function to build max heap
 *	@param arr[] array to buil max heap from
 *	@param size size of aray
 *	@return void
 */
void maxHeapify(int arr[], int size)
{
	int i = 0;

	for( i = (size-1)/2; i >= 0; i--)
	{
		heapify(arr, size, i);
	}
}

/*	function to sort an array using heap sort algorithm
 *	@param arr[] array to buil max heap from
 *	@param size size of aray
 *	@return void
 */
void heapSort(int arr[], int size)
{
	int i;

	maxHeapify(arr, size);
	
	for( i = size - 1; i >= 0; i--)
	{
		swap(&arr[0], &arr[i]);

		heapify(arr, i , 0);
	}
}
