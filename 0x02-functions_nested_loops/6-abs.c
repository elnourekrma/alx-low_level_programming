#include "main.h"
#include <ctype.h>
/**
 * _abs - writes string "_purchar"
 *Description: return the abslute value of an intger
  * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int n)
{if (n > 0)
return (n);
else if (n < 0)
return (-n);
else
return (0);
}
