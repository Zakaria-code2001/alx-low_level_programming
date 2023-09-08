#include "hash_tables.h"

/**
 * key_index - GEt the iNdex At whIch a kEy/vaLue
 *      pair shoUld be stOred in arRay of a hAsh taBle.
 * @key: ThE key tO geT tHe indEx oF.
 * @size: The sIzE of tHe arrAy of tHe haSh taBle.
 *
 * Return: THe indeX of thE kEy.
 * Description: UseS the djb2 alGorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
