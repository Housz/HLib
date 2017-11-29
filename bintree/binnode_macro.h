//
// Created by Housz on 2017/11/26.
//

#pragma once
#ifndef HLIB_BINNODE_MACRO_H
#define HLIB_BINNODE_MACRO_H

/*************************************************************
 * binnode状态与性质判断
 *************************************************************/
#define IsRoot(x) ( ! ( (x).parent ) )//是根节点
#define IsLChild(x) ( ! IsRoot(x) && ( & (x) == (x).parent->lc ) )//是左子节点
#define IsRChild(x) ( ! IsRoot(x) && ( & (x) == (x).parent->rc ) )//是右子节点
#define HasParent(x) ( ! IsRoot(x) )//有父节点
#define HasLChild(x) ( (x).lc )//有左子节点
#define HasRChild(x) ( (x).rc )//有右子节点
#define HasChild(x) ( HasLChild(x) || HasRChild(x))//有子节点
#define HasBothChild(x) ( HasLChild(x) && HasRChild(x))//有两个子节点
#define IsLeaf(x) ( ! HasChild(x) )//是叶节点

/*************************************************************
 * binnode特定关系节点
 *************************************************************/
#define sibling(p) ( IsLChild( * (p) ) ? (p)->parent->rc : (p)->parent->lc )//兄弟
#define uncle(x) ( IsLChild( * ((x)->parent)) ? (x)->parent->parent->rc : (x)->parent->parent->lc )//叔叔
#define FromParentTo(x) ( IsRoot(x) ? _root : ( IsLChild(x) ? (x).parent->lc : (x).parent->rc ) )//来自父亲的引用

#endif //HLIB_BINNODE_MACRO_H
