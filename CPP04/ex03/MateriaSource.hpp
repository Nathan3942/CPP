/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:15:31 by njeanbou          #+#    #+#             */
/*   Updated: 2024/10/30 18:34:26 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	invertory[4];
    public:
		MateriaSource();
		MateriaSource(const MateriaSource & copy);
		~MateriaSource();

		MateriaSource const &operator=(const MateriaSource & equal);

		void		learnMateria(AMateria* lm);
		AMateria*	createMateria(std::string const & type);
		int			intMaterialLearn(const AMateria* lm);
};