// comparation between bubble , selection and insertion sorting

// Feature	    Bubble Sort	   Selection Sort	  Insertion Sort
// Idea =>	Compare adjacent elements and swap if they are in the wrong order.
//      	Find the smallest element and place it in its correct position.	
//         Pick one element and insert it into its correct position in sorted part.
// Method =>	  Repeated swapping	 Selection + one swap per pass	Shifting/inserting
// Best Case =>	O(n) (with optimization)	O(n²)	O(n)
// Average Case =>	O(n²)	O(n²)	O(n²)
// Worst Case 	=>    O(n²)	O(n²)	O(n²)
// Space Complexity => O(1)	O(1)	O(1)
// Stable?	  =>      ✅ Yes	❌ No      ✅ Yes
// Adaptive? =>	    ✅ Yes (optimized version)	❌ No	✅ Yes
// Number of Swaps	Many =>	Very few (at most n−1)	Very few (mostly shifts)
// Good For =>	Small arrays	Small arrays where swaps are expensive	Small or nearly sorted arrays
