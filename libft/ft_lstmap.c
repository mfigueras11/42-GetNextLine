/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 15:59:17 by mfiguera          #+#    #+#             */
/*   Updated: 2017/11/24 15:59:18 by mfiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *temp;
	t_list *ret;
	t_list *curr;

	if (lst == NULL)
		return (NULL);
	temp = f(lst);
	curr = ft_lstmap(lst->next, f);
	ft_lstadd(&curr, (ret = ft_lstnew(temp->content, temp->content_size)));
	return (ret);
}
