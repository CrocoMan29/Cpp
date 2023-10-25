/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 05:44:36 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/25 03:00:38 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *_inventory[4];
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &src);
        ~MateriaSource();

        MateriaSource &operator=(MateriaSource const &src);

        void learnMateria(AMateria *m);
        AMateria *createMateria(std::string const &type);
        AMateria* save(int idx);
};