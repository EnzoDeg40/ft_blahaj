/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blahaj.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:14:59 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/26 11:14:59 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "blahaj.h"

char	*blahaj(int n_pet)
{
	char*   str;

	if (n_pet <= 0)
		str = "Pas de pets, pas de blagues. Blahaj est triste :(";
	else if (n_pet == 1)
		str = "Un pet, c'est bien, mais Blahaj en voudrait bien un peu plus pour se réchauffer !";
	else if (n_pet <= 5)
		str = "Blahaj apprécie les pets, mais ne t'arrête pas là ! Plus il y en a, mieux c'est !";
	else
		str = "Wow, Blahaj est aux anges avec tous ces pets ! Il se sent comme un requin !";
	return str;
}
