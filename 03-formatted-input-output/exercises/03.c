// For each of the following pairs of scanf format strings, indicate whether or not the two strings are equivalent. If
// they're not, show how they can be distinguished.
//
// (a) "%d"       versus " %d"
//     Answer:
//     Equivalent
//
// (b) "%d-%d-%d" versus "%d -%d -%d"
//     Answer:
//     Not equivalent: 1 -2 -3 fails for the first format string
//
// (c) "%f"       versus "%f "
//     Answer:
//     Not equivalent: second format string hangs while waiting for non-whitespace input
//
// (d) "%f,%f"    versus "%f, %f"
//     Answer:
//     Equivalent
