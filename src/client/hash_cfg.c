/* ANSI-C code produced by gperf version 3.0.1 */
/* Command-line: gperf -t -LANSI-C hash_cfg.inp  */
/* Computed positions: -k'1' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 1 "hash_cfg.inp"

/*
 *    hash_cfg.c
 *
 *    gtmess - MSN Messenger client
 *    Copyright (C) 2002-2004  George M. Tzoumas
 *
 *    This program is free software; you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation; either version 2 of the License, or
 *    (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program; if not, write to the Free Software
 *    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
#line 23 "hash_cfg.inp"
struct hct_entry {
    char name[256];
    int id; 
};

#define TOTAL_KEYWORDS 24
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 20
#define MIN_HASH_VALUE 3
#define MAX_HASH_VALUE 35
/* maximum key range = 33, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (register const char *str, register unsigned int len)
{
  static unsigned char asso_values[] =
    {
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 20, 36,  0,
      36, 36, 36, 15, 36,  5, 36, 36, 20,  0,
      36, 15,  0, 36, 36, 15,  0, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36
    };
  return len + asso_values[(unsigned char)str[0]];
}

#ifdef __GNUC__
__inline
#endif
struct hct_entry *
in_word_set (register const char *str, register unsigned int len)
{
  static struct hct_entry wordlist[] =
    {
      {""}, {""}, {""},
#line 33 "hash_cfg.inp"
      {"cvr", 5},
      {""},
#line 31 "hash_cfg.inp"
      {"popup", 3},
#line 29 "hash_cfg.inp"
      {"colors", 1},
#line 43 "hash_cfg.inp"
      {"msnftpd", 15},
#line 39 "hash_cfg.inp"
      {"password", 11},
#line 45 "hash_cfg.inp"
      {"msg_debug", 17},
#line 46 "hash_cfg.inp"
      {"msg_notify", 18},
#line 34 "hash_cfg.inp"
      {"cert_prompt", 6},
#line 51 "hash_cfg.inp"
      {"max_nick_len", 23},
#line 47 "hash_cfg.inp"
      {"idle_sec", 19},
#line 49 "hash_cfg.inp"
      {"invitable", 21},
#line 32 "hash_cfg.inp"
      {"time_user_types", 4},
#line 36 "hash_cfg.inp"
      {"console_encoding", 8},
      {""},
#line 35 "hash_cfg.inp"
      {"common_name_prompt", 7},
#line 40 "hash_cfg.inp"
      {"initial_status", 12},
#line 30 "hash_cfg.inp"
      {"sound", 2},
#line 37 "hash_cfg.inp"
      {"server", 9},
      {""}, {""},
#line 42 "hash_cfg.inp"
      {"syn_cache", 14},
#line 38 "hash_cfg.inp"
      {"login", 10},
#line 41 "hash_cfg.inp"
      {"online_only", 13},
#line 44 "hash_cfg.inp"
      {"aliases", 16},
      {""}, {""},
#line 48 "hash_cfg.inp"
      {"auto_login", 20},
#line 28 "hash_cfg.inp"
      {"log_traffic", 0},
      {""}, {""}, {""},
#line 50 "hash_cfg.inp"
      {"gtmesscontrol_ignore", 22}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
