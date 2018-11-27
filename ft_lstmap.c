/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 18:52:59 by alfiumic          #+#    #+#             */
/*   Updated: 2018/11/27 12:19:13 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;
	t_list	*head;

	if (!lst || !f)
		return (NULL);
	tmp = (*f)(lst);
	if (!(head = ft_lstnew(tmp->content, tmp->content_size)))
		return (NULL);
	lst = lst->next;
	new = head;
	while (lst)
	{
		tmp = (*f)(lst);
		if (!(new->next = ft_lstnew(tmp->content, tmp->content_size)))
			return (NULL);
		new = new->next;
		lst = lst->next;
	}
	return (head);
}
