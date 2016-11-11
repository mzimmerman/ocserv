/*   -*- buffer-read-only: t -*- vi: set ro:
 *
 *  DO NOT EDIT THIS FILE   (args.c)
 *
 *  It has been AutoGen-ed
 *  From the definitions    args.def
 *  and the template file   options
 *
 * Generated from AutoOpts 41:1:16 templates.
 *
 *  AutoOpts is a copyrighted work.  This source file is not encumbered
 *  by AutoOpts licensing, but is provided under the licensing terms chosen
 *  by the ocpasswd author or copyright holder.  AutoOpts is
 *  licensed under the terms of the LGPL.  The redistributable library
 *  (``libopts'') is licensed under the terms of either the LGPL or, at the
 *  users discretion, the BSD license.  See the AutoOpts and/or libopts sources
 *  for details.
 *
 * The ocpasswd program is copyrighted and licensed
 * under the following terms:
 *
 *  Copyright (C) 2013-2016 Nikos Mavrogiannopoulos, all rights reserved.
 *  This is free software. It is licensed for use, modification and
 *  redistribution under the terms of the GNU General Public License,
 *  version 2 <http://gnu.org/licenses/gpl.html>
 *
 *  ocpasswd is free software: you can redistribute it and/or modify it
 *  under the terms of version 2 of the GNU General Public License,
 *  as published by the Free Software Foundation.
 *
 *  ocpasswd is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License,
 *  version 2, along with this program.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __doxygen__
#define OPTION_CODE_COMPILE 1
#include "args.h"
#include <sys/types.h>

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#ifdef  __cplusplus
extern "C" {
#endif
extern FILE * option_usage_fp;
#define zCopyright      (ocpasswd_opt_strs+0)
#define zLicenseDescrip (ocpasswd_opt_strs+262)


#ifndef NULL
#  define NULL 0
#endif

/**
 *  static const strings for ocpasswd options
 */
static char const ocpasswd_opt_strs[1516] =
/*     0 */ "ocpasswd 0.11.5\n"
            "Copyright (C) 2013-2016 Nikos Mavrogiannopoulos, all rights reserved.\n"
            "This is free software. It is licensed for use, modification and\n"
            "redistribution under the terms of the GNU General Public License,\n"
            "version 2 <http://gnu.org/licenses/gpl.html>\n\0"
/*   262 */ "ocpasswd is free software: you can redistribute it and/or modify it under\n"
            "the terms of version 2 of the GNU General Public License, as published by\n"
            "the Free Software Foundation.\n\n"
            "ocpasswd is distributed in the hope that it will be useful, but WITHOUT ANY\n"
            "WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS\n"
            "FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more\n"
            "details.\n\n"
            "You should have received a copy of the GNU General Public License, version\n"
            "2, along with this program.  If not, see <http://www.gnu.org/licenses/>.\n\0"
/*   821 */ "Password file\0"
/*   835 */ "PASSWD\0"
/*   842 */ "passwd\0"
/*   849 */ "User's group name\0"
/*   867 */ "GROUPNAME\0"
/*   877 */ "groupname\0"
/*   887 */ "Delete user\0"
/*   899 */ "DELETE\0"
/*   906 */ "delete\0"
/*   913 */ "Lock user\0"
/*   923 */ "LOCK\0"
/*   928 */ "lock\0"
/*   933 */ "Unlock user\0"
/*   945 */ "UNLOCK\0"
/*   952 */ "unlock\0"
/*   959 */ "display extended usage information and exit\0"
/*  1003 */ "help\0"
/*  1008 */ "extended usage information passed thru pager\0"
/*  1053 */ "more-help\0"
/*  1063 */ "output version information and exit\0"
/*  1099 */ "version\0"
/*  1107 */ "OCPASSWD\0"
/*  1116 */ "ocpasswd - OpenConnect server password utility\n"
            "Usage:  %s [ -<flag> [<val>] | --<name>[{=| }<val>] ]... [username]\n\0"
/*  1232 */ "openconnect-devel@lists.infradead.org\0"
/*  1270 */ "\n\0"
/*  1272 */ "This program is openconnect password (ocpasswd) utility.  It allows the\n"
            "generation and handling of a 'plain' password file used by ocserv.\n\0"
/*  1412 */ "ocpasswd 0.11.5\0"
/*  1428 */ "Usage: ocpasswd -c [passwd] [options] username\n"
            "ocpasswd --help for usage instructions.\n";

/**
 *  passwd option description:
 */
/** Descriptive text for the passwd option */
#define PASSWD_DESC      (ocpasswd_opt_strs+821)
/** Upper-cased name for the passwd option */
#define PASSWD_NAME      (ocpasswd_opt_strs+835)
/** Name string for the passwd option */
#define PASSWD_name      (ocpasswd_opt_strs+842)
/** Compiled in flag settings for the passwd option */
#define PASSWD_FLAGS     (OPTST_DISABLED \
        | OPTST_SET_ARGTYPE(OPARG_TYPE_FILE))

/**
 *  groupname option description:
 */
/** Descriptive text for the groupname option */
#define GROUPNAME_DESC      (ocpasswd_opt_strs+849)
/** Upper-cased name for the groupname option */
#define GROUPNAME_NAME      (ocpasswd_opt_strs+867)
/** Name string for the groupname option */
#define GROUPNAME_name      (ocpasswd_opt_strs+877)
/** Compiled in flag settings for the groupname option */
#define GROUPNAME_FLAGS     (OPTST_DISABLED \
        | OPTST_SET_ARGTYPE(OPARG_TYPE_STRING))

/**
 *  delete option description:
 */
/** Descriptive text for the delete option */
#define DELETE_DESC      (ocpasswd_opt_strs+887)
/** Upper-cased name for the delete option */
#define DELETE_NAME      (ocpasswd_opt_strs+899)
/** Name string for the delete option */
#define DELETE_name      (ocpasswd_opt_strs+906)
/** Compiled in flag settings for the delete option */
#define DELETE_FLAGS     (OPTST_DISABLED)

/**
 *  lock option description:
 */
/** Descriptive text for the lock option */
#define LOCK_DESC      (ocpasswd_opt_strs+913)
/** Upper-cased name for the lock option */
#define LOCK_NAME      (ocpasswd_opt_strs+923)
/** Name string for the lock option */
#define LOCK_name      (ocpasswd_opt_strs+928)
/** Compiled in flag settings for the lock option */
#define LOCK_FLAGS     (OPTST_DISABLED)

/**
 *  unlock option description:
 */
/** Descriptive text for the unlock option */
#define UNLOCK_DESC      (ocpasswd_opt_strs+933)
/** Upper-cased name for the unlock option */
#define UNLOCK_NAME      (ocpasswd_opt_strs+945)
/** Name string for the unlock option */
#define UNLOCK_name      (ocpasswd_opt_strs+952)
/** Compiled in flag settings for the unlock option */
#define UNLOCK_FLAGS     (OPTST_DISABLED)

/*
 *  Help/More_Help/Version option descriptions:
 */
#define HELP_DESC       (ocpasswd_opt_strs+959)
#define HELP_name       (ocpasswd_opt_strs+1003)
#ifdef HAVE_WORKING_FORK
#define MORE_HELP_DESC  (ocpasswd_opt_strs+1008)
#define MORE_HELP_name  (ocpasswd_opt_strs+1053)
#define MORE_HELP_FLAGS (OPTST_IMM | OPTST_NO_INIT)
#else
#define MORE_HELP_DESC  HELP_DESC
#define MORE_HELP_name  HELP_name
#define MORE_HELP_FLAGS (OPTST_OMITTED | OPTST_NO_INIT)
#endif
#ifdef NO_OPTIONAL_OPT_ARGS
#  define VER_FLAGS     (OPTST_IMM | OPTST_NO_INIT)
#else
#  define VER_FLAGS     (OPTST_SET_ARGTYPE(OPARG_TYPE_STRING) | \
                         OPTST_ARG_OPTIONAL | OPTST_IMM | OPTST_NO_INIT)
#endif
#define VER_DESC        (ocpasswd_opt_strs+1063)
#define VER_name        (ocpasswd_opt_strs+1099)
/**
 *  Declare option callback procedures
 */
extern tOptProc
    optionBooleanVal,   optionNestedVal,    optionNumericVal,
    optionPagedUsage,   optionPrintVersion, optionResetOpt,
    optionStackArg,     optionTimeDate,     optionTimeVal,
    optionUnstackArg,   optionVendorOption;
static tOptProc
    doOptPasswd, doUsageOpt;
#define VER_PROC        optionPrintVersion

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/**
 *  Define the ocpasswd Option Descriptions.
 * This is an array of OPTION_CT entries, one for each
 * option that the ocpasswd program responds to.
 */
static tOptDesc optDesc[OPTION_CT] = {
  {  /* entry idx, value */ 0, VALUE_OPT_PASSWD,
     /* equiv idx, value */ 0, VALUE_OPT_PASSWD,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ PASSWD_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --passwd */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ doOptPasswd,
     /* desc, NAME, name */ PASSWD_DESC, PASSWD_NAME, PASSWD_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 1, VALUE_OPT_GROUPNAME,
     /* equiv idx, value */ 1, VALUE_OPT_GROUPNAME,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ GROUPNAME_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --groupname */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ NULL,
     /* desc, NAME, name */ GROUPNAME_DESC, GROUPNAME_NAME, GROUPNAME_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 2, VALUE_OPT_DELETE,
     /* equiv idx, value */ 2, VALUE_OPT_DELETE,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ DELETE_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --delete */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ NULL,
     /* desc, NAME, name */ DELETE_DESC, DELETE_NAME, DELETE_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 3, VALUE_OPT_LOCK,
     /* equiv idx, value */ 3, VALUE_OPT_LOCK,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ LOCK_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --lock */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ NULL,
     /* desc, NAME, name */ LOCK_DESC, LOCK_NAME, LOCK_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 4, VALUE_OPT_UNLOCK,
     /* equiv idx, value */ 4, VALUE_OPT_UNLOCK,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ UNLOCK_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --unlock */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ NULL,
     /* desc, NAME, name */ UNLOCK_DESC, UNLOCK_NAME, UNLOCK_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ INDEX_OPT_VERSION, VALUE_OPT_VERSION,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_OPT_VERSION,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ VER_FLAGS, AOUSE_VERSION,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ VER_PROC,
     /* desc, NAME, name */ VER_DESC, NULL, VER_name,
     /* disablement strs */ NULL, NULL },



  {  /* entry idx, value */ INDEX_OPT_HELP, VALUE_OPT_HELP,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_OPT_HELP,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ OPTST_IMM | OPTST_NO_INIT, AOUSE_HELP,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ doUsageOpt,
     /* desc, NAME, name */ HELP_DESC, NULL, HELP_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ INDEX_OPT_MORE_HELP, VALUE_OPT_MORE_HELP,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_OPT_MORE_HELP,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ MORE_HELP_FLAGS, AOUSE_MORE_HELP,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL,  NULL,
     /* option proc      */ optionPagedUsage,
     /* desc, NAME, name */ MORE_HELP_DESC, NULL, MORE_HELP_name,
     /* disablement strs */ NULL, NULL }
};


/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/** Reference to the upper cased version of ocpasswd. */
#define zPROGNAME       (ocpasswd_opt_strs+1107)
/** Reference to the title line for ocpasswd usage. */
#define zUsageTitle     (ocpasswd_opt_strs+1116)
/** There is no ocpasswd configuration file. */
#define zRcName         NULL
/** There are no directories to search for ocpasswd config files. */
#define apzHomeList     NULL
/** The ocpasswd program bug email address. */
#define zBugsAddr       (ocpasswd_opt_strs+1232)
/** Clarification/explanation of what ocpasswd does. */
#define zExplain        (ocpasswd_opt_strs+1270)
/** Extra detail explaining what ocpasswd does. */
#define zDetail         (ocpasswd_opt_strs+1272)
/** The full version string for ocpasswd. */
#define zFullVersion    (ocpasswd_opt_strs+1412)
/* extracted from optcode.tlib near line 364 */

#if defined(ENABLE_NLS)
# define OPTPROC_BASE OPTPROC_TRANSLATE | OPTPROC_NXLAT_OPT
  static tOptionXlateProc translate_option_strings;
#else
# define OPTPROC_BASE OPTPROC_NONE
# define translate_option_strings NULL
#endif /* ENABLE_NLS */

#define ocpasswd_full_usage (NULL)
#define ocpasswd_short_usage (ocpasswd_opt_strs+1428)

#endif /* not defined __doxygen__ */

/*
 *  Create the static procedure(s) declared above.
 */
/**
 * The callout function that invokes the optionUsage function.
 *
 * @param[in] opts the AutoOpts option description structure
 * @param[in] od   the descriptor for the "help" (usage) option.
 * @noreturn
 */
static void
doUsageOpt(tOptions * opts, tOptDesc * od)
{
    int ex_code;
    ex_code = OCPASSWD_EXIT_SUCCESS;
    optionUsage(&ocpasswdOptions, ex_code);
    /* NOTREACHED */
    exit(OCPASSWD_EXIT_FAILURE);
    (void)opts;
    (void)od;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/**
 * Code to handle the passwd option.
 *
 * @param[in] pOptions the ocpasswd options data structure
 * @param[in,out] pOptDesc the option descriptor for this option.
 */
static void
doOptPasswd(tOptions* pOptions, tOptDesc* pOptDesc)
{
    static teOptFileType const  type =
        FTYPE_MODE_MAY_EXIST + FTYPE_MODE_NO_OPEN;
    static tuFileMode           mode;
#ifndef O_CLOEXEC
#  define O_CLOEXEC 0
#endif
    mode.file_flags = O_CLOEXEC;

    /*
     * This function handles special invalid values for "pOptions"
     */
    optionFileCheck(pOptions, pOptDesc, type, mode);
}
/* extracted from optmain.tlib near line 1250 */

/**
 * The directory containing the data associated with ocpasswd.
 */
#ifndef  PKGDATADIR
# define PKGDATADIR ""
#endif

/**
 * Information about the person or institution that packaged ocpasswd
 * for the current distribution.
 */
#ifndef  WITH_PACKAGER
# define ocpasswd_packager_info NULL
#else
/** Packager information for ocpasswd. */
static char const ocpasswd_packager_info[] =
    "Packaged by " WITH_PACKAGER

# ifdef WITH_PACKAGER_VERSION
        " ("WITH_PACKAGER_VERSION")"
# endif

# ifdef WITH_PACKAGER_BUG_REPORTS
    "\nReport ocpasswd bugs to " WITH_PACKAGER_BUG_REPORTS
# endif
    "\n";
#endif
#ifndef __doxygen__

#endif /* __doxygen__ */
/**
 * The option definitions for ocpasswd.  The one structure that
 * binds them all.
 */
tOptions ocpasswdOptions = {
    OPTIONS_STRUCT_VERSION,
    0, NULL,                    /* original argc + argv    */
    ( OPTPROC_BASE
    + OPTPROC_ERRSTOP
    + OPTPROC_SHORTOPT
    + OPTPROC_LONGOPT
    + OPTPROC_NO_REQ_OPT
    + OPTPROC_REORDER
    + OPTPROC_GNUUSAGE
    + OPTPROC_MISUSE ),
    0, NULL,                    /* current option index, current option */
    NULL,         NULL,         zPROGNAME,
    zRcName,      zCopyright,   zLicenseDescrip,
    zFullVersion, apzHomeList,  zUsageTitle,
    zExplain,     zDetail,      optDesc,
    zBugsAddr,                  /* address to send bugs to */
    NULL, NULL,                 /* extensions/saved state  */
    optionUsage, /* usage procedure */
    translate_option_strings,   /* translation procedure */
    /*
     *  Indexes to special options
     */
    { INDEX_OPT_MORE_HELP, /* more-help option index */
      NO_EQUIVALENT, /* save option index */
      NO_EQUIVALENT, /* '-#' option index */
      NO_EQUIVALENT /* index of default opt */
    },
    8 /* full option count */, 5 /* user option count */,
    ocpasswd_full_usage, ocpasswd_short_usage,
    NULL, NULL,
    PKGDATADIR, ocpasswd_packager_info
};

#if ENABLE_NLS
/**
 * This code is designed to translate translatable option text for the
 * ocpasswd program.  These translations happen upon entry
 * to optionProcess().
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#ifdef HAVE_DCGETTEXT
# include <gettext.h>
#endif
#include <autoopts/usage-txt.h>

static char * AO_gettext(char const * pz);
static void   coerce_it(void ** s);

/**
 * AutoGen specific wrapper function for gettext.  It relies on the macro _()
 * to convert from English to the target language, then strdup-duplicates the
 * result string.  It tries the "libopts" domain first, then whatever has been
 * set via the \a textdomain(3) call.
 *
 * @param[in] pz the input text used as a lookup key.
 * @returns the translated text (if there is one),
 *   or the original text (if not).
 */
static char *
AO_gettext(char const * pz)
{
    char * res;
    if (pz == NULL)
        return NULL;
#ifdef HAVE_DCGETTEXT
    /*
     * While processing the option_xlateable_txt data, try to use the
     * "libopts" domain.  Once we switch to the option descriptor data,
     * do *not* use that domain.
     */
    if (option_xlateable_txt.field_ct != 0) {
        res = dgettext("libopts", pz);
        if (res == pz)
            res = (char *)VOIDP(_(pz));
    } else
        res = (char *)VOIDP(_(pz));
#else
    res = (char *)VOIDP(_(pz));
#endif
    if (res == pz)
        return res;
    res = strdup(res);
    if (res == NULL) {
        fputs(_("No memory for duping translated strings\n"), stderr);
        exit(OCPASSWD_EXIT_FAILURE);
    }
    return res;
}

/**
 * All the pointers we use are marked "* const", but they are stored in
 * writable memory.  Coerce the mutability and set the pointer.
 */
static void coerce_it(void ** s) { *s = AO_gettext(*s);
}

/**
 * Translate all the translatable strings in the ocpasswdOptions
 * structure defined above.  This is done only once.
 */
static void
translate_option_strings(void)
{
    tOptions * const opts = &ocpasswdOptions;

    /*
     *  Guard against re-translation.  It won't work.  The strings will have
     *  been changed by the first pass through this code.  One shot only.
     */
    if (option_xlateable_txt.field_ct != 0) {
        /*
         *  Do the translations.  The first pointer follows the field count
         *  field.  The field count field is the size of a pointer.
         */
        char ** ppz = (char**)VOIDP(&(option_xlateable_txt));
        int     ix  = option_xlateable_txt.field_ct;

        do {
            ppz++; /* skip over field_ct */
            *ppz = AO_gettext(*ppz);
        } while (--ix > 0);
        /* prevent re-translation and disable "libopts" domain lookup */
        option_xlateable_txt.field_ct = 0;

        coerce_it(VOIDP(&(opts->pzCopyright)));
        coerce_it(VOIDP(&(opts->pzCopyNotice)));
        coerce_it(VOIDP(&(opts->pzFullVersion)));
        coerce_it(VOIDP(&(opts->pzUsageTitle)));
        coerce_it(VOIDP(&(opts->pzExplain)));
        coerce_it(VOIDP(&(opts->pzDetail)));
        {
            tOptDesc * od = opts->pOptDesc;
            for (ix = opts->optCt; ix > 0; ix--, od++)
                coerce_it(VOIDP(&(od->pzText)));
        }
    }
}
#endif /* ENABLE_NLS */

#ifdef DO_NOT_COMPILE_THIS_CODE_IT_IS_FOR_GETTEXT
/** I18N function strictly for xgettext.  Do not compile. */
static void bogus_function(void) {
  /* TRANSLATORS:

     The following dummy function was crated solely so that xgettext can
     extract the correct strings.  These strings are actually referenced
     by a field name in the ocpasswdOptions structure noted in the
     comments below.  The literal text is defined in ocpasswd_opt_strs.
   
     NOTE: the strings below are segmented with respect to the source string
     ocpasswd_opt_strs.  The strings above are handed off for translation
     at run time a paragraph at a time.  Consequently, they are presented here
     for translation a paragraph at a time.
   
     ALSO: often the description for an option will reference another option
     by name.  These are set off with apostrophe quotes (I hope).  Do not
     translate option names.
   */
  /* referenced via ocpasswdOptions.pzCopyright */
  puts(_("ocpasswd 0.11.5\n\
Copyright (C) 2013-2016 Nikos Mavrogiannopoulos, all rights reserved.\n\
This is free software. It is licensed for use, modification and\n\
redistribution under the terms of the GNU General Public License,\n\
version 2 <http://gnu.org/licenses/gpl.html>\n"));

  /* referenced via ocpasswdOptions.pzCopyNotice */
  puts(_("ocpasswd is free software: you can redistribute it and/or modify it under\n\
the terms of version 2 of the GNU General Public License, as published by\n\
the Free Software Foundation.\n\n"));
  puts(_("ocpasswd is distributed in the hope that it will be useful, but WITHOUT ANY\n\
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS\n\
FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more\n\
details.\n\n"));
  puts(_("You should have received a copy of the GNU General Public License, version\n\
2, along with this program.  If not, see <http://www.gnu.org/licenses/>.\n"));

  /* referenced via ocpasswdOptions.pOptDesc->pzText */
  puts(_("Password file"));

  /* referenced via ocpasswdOptions.pOptDesc->pzText */
  puts(_("User's group name"));

  /* referenced via ocpasswdOptions.pOptDesc->pzText */
  puts(_("Delete user"));

  /* referenced via ocpasswdOptions.pOptDesc->pzText */
  puts(_("Lock user"));

  /* referenced via ocpasswdOptions.pOptDesc->pzText */
  puts(_("Unlock user"));

  /* referenced via ocpasswdOptions.pOptDesc->pzText */
  puts(_("display extended usage information and exit"));

  /* referenced via ocpasswdOptions.pOptDesc->pzText */
  puts(_("extended usage information passed thru pager"));

  /* referenced via ocpasswdOptions.pOptDesc->pzText */
  puts(_("output version information and exit"));

  /* referenced via ocpasswdOptions.pzUsageTitle */
  puts(_("ocpasswd - OpenConnect server password utility\n\
Usage:  %s [ -<flag> [<val>] | --<name>[{=| }<val>] ]... [username]\n"));

  /* referenced via ocpasswdOptions.pzExplain */
  puts(_("\n"));

  /* referenced via ocpasswdOptions.pzDetail */
  puts(_("This program is openconnect password (ocpasswd) utility.  It allows the\n\
generation and handling of a 'plain' password file used by ocserv.\n"));

  /* referenced via ocpasswdOptions.pzFullVersion */
  puts(_("ocpasswd 0.11.5"));

  /* referenced via ocpasswdOptions.pzFullUsage */
  puts(_("<<<NOT-FOUND>>>"));

  /* referenced via ocpasswdOptions.pzShortUsage */
  puts(_("Usage: ocpasswd -c [passwd] [options] username\n\
ocpasswd --help for usage instructions.\n"));
  /* LIBOPTS-MESSAGES: */
#line 67 "../autoopts.c"
  puts(_("allocation of %d bytes failed\n"));
#line 93 "../autoopts.c"
  puts(_("allocation of %d bytes failed\n"));
#line 53 "../init.c"
  puts(_("AutoOpts function called without option descriptor\n"));
#line 86 "../init.c"
  puts(_("\tThis exceeds the compiled library version:  "));
#line 84 "../init.c"
  puts(_("Automated Options Processing Error!\n"
       "\t%s called AutoOpts function with structure version %d:%d:%d.\n"));
#line 80 "../autoopts.c"
  puts(_("realloc of %d bytes at 0x%p failed\n"));
#line 88 "../init.c"
  puts(_("\tThis is less than the minimum library version:  "));
#line 121 "../version.c"
  puts(_("Automated Options version %s\n"
       "\tCopyright (C) 1999-2014 by Bruce Korb - all rights reserved\n"));
#line 87 "../makeshell.c"
  puts(_("(AutoOpts bug):  %s.\n"));
#line 90 "../reset.c"
  puts(_("optionResetOpt() called, but reset-option not configured"));
#line 292 "../usage.c"
  puts(_("could not locate the 'help' option"));
#line 336 "../autoopts.c"
  puts(_("optionProcess() was called with invalid data"));
#line 748 "../usage.c"
  puts(_("invalid argument type specified"));
#line 598 "../find.c"
  puts(_("defaulted to option with optional arg"));
#line 76 "../alias.c"
  puts(_("aliasing option is out of range."));
#line 235 "../enum.c"
  puts(_("%s error:  the keyword '%s' is ambiguous for %s\n"));
#line 108 "../find.c"
  puts(_("  The following options match:\n"));
#line 293 "../find.c"
  puts(_("%s: ambiguous option name: %s (matches %d options)\n"));
#line 161 "../check.c"
  puts(_("%s: Command line arguments required\n"));
#line 43 "../alias.c"
  puts(_("%d %s%s options allowed\n"));
#line 94 "../makeshell.c"
  puts(_("%s error %d (%s) calling %s for '%s'\n"));
#line 306 "../makeshell.c"
  puts(_("interprocess pipe"));
#line 168 "../version.c"
  puts(_("error: version option argument '%c' invalid.  Use:\n"
       "\t'v' - version only\n"
       "\t'c' - version and copyright\n"
       "\t'n' - version and full copyright notice\n"));
#line 58 "../check.c"
  puts(_("%s error:  the '%s' and '%s' options conflict\n"));
#line 217 "../find.c"
  puts(_("%s: The '%s' option has been disabled."));
#line 430 "../find.c"
  puts(_("%s: The '%s' option has been disabled."));
#line 38 "../alias.c"
  puts(_("-equivalence"));
#line 469 "../find.c"
  puts(_("%s: illegal option -- %c\n"));
#line 110 "../reset.c"
  puts(_("%s: illegal option -- %c\n"));
#line 271 "../find.c"
  puts(_("%s: illegal option -- %s\n"));
#line 755 "../find.c"
  puts(_("%s: illegal option -- %s\n"));
#line 118 "../reset.c"
  puts(_("%s: illegal option -- %s\n"));
#line 335 "../find.c"
  puts(_("%s: unknown vendor extension option -- %s\n"));
#line 160 "../enum.c"
  puts(_("  or an integer from %d through %d\n"));
#line 170 "../enum.c"
  puts(_("  or an integer from %d through %d\n"));
#line 747 "../usage.c"
  puts(_("%s error:  invalid option descriptor for %s\n"));
#line 1081 "../usage.c"
  puts(_("%s error:  invalid option descriptor for %s\n"));
#line 385 "../find.c"
  puts(_("%s: invalid option name: %s\n"));
#line 527 "../find.c"
  puts(_("%s: The '%s' option requires an argument.\n"));
#line 156 "../autoopts.c"
  puts(_("(AutoOpts bug):  Equivalenced option '%s' was equivalenced to both\n"
       "\t'%s' and '%s'."));
#line 94 "../check.c"
  puts(_("%s error:  The %s option is required\n"));
#line 632 "../find.c"
  puts(_("%s: The '%s' option cannot have an argument.\n"));
#line 151 "../check.c"
  puts(_("%s: Command line arguments are not allowed.\n"));
#line 535 "../save.c"
  puts(_("error %d (%s) creating %s\n"));
#line 235 "../enum.c"
  puts(_("%s error:  '%s' does not match any %s keywords.\n"));
#line 93 "../reset.c"
  puts(_("%s error: The '%s' option requires an argument.\n"));
#line 186 "../save.c"
  puts(_("error %d (%s) stat-ing %s\n"));
#line 238 "../save.c"
  puts(_("error %d (%s) stat-ing %s\n"));
#line 143 "../restore.c"
  puts(_("%s error: no saved option state\n"));
#line 231 "../autoopts.c"
  puts(_("'%s' is not a command line option.\n"));
#line 113 "../time.c"
  puts(_("%s error:  '%s' is not a recognizable date/time.\n"));
#line 131 "../save.c"
  puts(_("'%s' not defined\n"));
#line 50 "../time.c"
  puts(_("%s error:  '%s' is not a recognizable time duration.\n"));
#line 92 "../check.c"
  puts(_("%s error:  The %s option must appear %d times.\n"));
#line 165 "../numeric.c"
  puts(_("%s error:  '%s' is not a recognizable number.\n"));
#line 201 "../enum.c"
  puts(_("%s error:  %s exceeds %s keyword count\n"));
#line 330 "../usage.c"
  puts(_("Try '%s %s' for more information.\n"));
#line 45 "../alias.c"
  puts(_("one %s%s option allowed\n"));
#line 208 "../makeshell.c"
  puts(_("standard output"));
#line 943 "../makeshell.c"
  puts(_("standard output"));
#line 274 "../usage.c"
  puts(_("standard output"));
#line 415 "../usage.c"
  puts(_("standard output"));
#line 625 "../usage.c"
  puts(_("standard output"));
#line 175 "../version.c"
  puts(_("standard output"));
#line 274 "../usage.c"
  puts(_("standard error"));
#line 415 "../usage.c"
  puts(_("standard error"));
#line 625 "../usage.c"
  puts(_("standard error"));
#line 175 "../version.c"
  puts(_("standard error"));
#line 208 "../makeshell.c"
  puts(_("write"));
#line 943 "../makeshell.c"
  puts(_("write"));
#line 273 "../usage.c"
  puts(_("write"));
#line 414 "../usage.c"
  puts(_("write"));
#line 624 "../usage.c"
  puts(_("write"));
#line 174 "../version.c"
  puts(_("write"));
#line 60 "../numeric.c"
  puts(_("%s error:  %s option value %ld is out of range.\n"));
#line 44 "../check.c"
  puts(_("%s error:  %s option requires the %s option\n"));
#line 130 "../save.c"
  puts(_("%s warning:  cannot save options - %s not regular file\n"));
#line 185 "../save.c"
  puts(_("%s warning:  cannot save options - %s not regular file\n"));
#line 237 "../save.c"
  puts(_("%s warning:  cannot save options - %s not regular file\n"));
#line 256 "../save.c"
  puts(_("%s warning:  cannot save options - %s not regular file\n"));
#line 534 "../save.c"
  puts(_("%s warning:  cannot save options - %s not regular file\n"));
  /* END-LIBOPTS-MESSAGES */

  /* USAGE-TEXT: */
#line 873 "../usage.c"
  puts(_("\t\t\t\t- an alternate for '%s'\n"));
#line 1148 "../usage.c"
  puts(_("Version, usage and configuration options:"));
#line 924 "../usage.c"
  puts(_("\t\t\t\t- default option for unnamed options\n"));
#line 837 "../usage.c"
  puts(_("\t\t\t\t- disabled as '--%s'\n"));
#line 1117 "../usage.c"
  puts(_(" --- %-14s %s\n"));
#line 1115 "../usage.c"
  puts(_("This option has been disabled"));
#line 864 "../usage.c"
  puts(_("\t\t\t\t- enabled by default\n"));
#line 40 "../alias.c"
  puts(_("%s error:  only "));
#line 1194 "../usage.c"
  puts(_(" - examining environment variables named %s_*\n"));
#line 168 "../file.c"
  puts(_("\t\t\t\t- file must not pre-exist\n"));
#line 172 "../file.c"
  puts(_("\t\t\t\t- file must pre-exist\n"));
#line 380 "../usage.c"
  puts(_("Options are specified by doubled hyphens and their name or by a single\n"
       "hyphen and the flag character.\n"));
#line 921 "../makeshell.c"
  puts(_("\n"
       "= = = = = = = =\n\n"
       "This incarnation of genshell will produce\n"
       "a shell script to parse the options for %s:\n\n"));
#line 167 "../enum.c"
  puts(_("  or an integer mask with any of the lower %d bits set\n"));
#line 897 "../usage.c"
  puts(_("\t\t\t\t- is a set membership option\n"));
#line 918 "../usage.c"
  puts(_("\t\t\t\t- must appear between %d and %d times\n"));
#line 382 "../usage.c"
  puts(_("Options are specified by single or double hyphens and their name.\n"));
#line 904 "../usage.c"
  puts(_("\t\t\t\t- may appear multiple times\n"));
#line 891 "../usage.c"
  puts(_("\t\t\t\t- may not be preset\n"));
#line 1309 "../usage.c"
  puts(_("   Arg Option-Name    Description\n"));
#line 1245 "../usage.c"
  puts(_("  Flg Arg Option-Name    Description\n"));
#line 1303 "../usage.c"
  puts(_("  Flg Arg Option-Name    Description\n"));
#line 1304 "../usage.c"
  puts(_(" %3s %s"));
#line 1310 "../usage.c"
  puts(_(" %3s %s"));
#line 387 "../usage.c"
  puts(_("The '-#<number>' option may omit the hash char\n"));
#line 383 "../usage.c"
  puts(_("All arguments are named options.\n"));
#line 971 "../usage.c"
  puts(_(" - reading file %s"));
#line 409 "../usage.c"
  puts(_("\n"
       "Please send bug reports to:  <%s>\n"));
#line 100 "../version.c"
  puts(_("\n"
       "Please send bug reports to:  <%s>\n"));
#line 129 "../version.c"
  puts(_("\n"
       "Please send bug reports to:  <%s>\n"));
#line 903 "../usage.c"
  puts(_("\t\t\t\t- may NOT appear - preset only\n"));
#line 944 "../usage.c"
  puts(_("\n"
       "The following option preset mechanisms are supported:\n"));
#line 1192 "../usage.c"
  puts(_("\n"
       "The following option preset mechanisms are supported:\n"));
#line 682 "../usage.c"
  puts(_("prohibits these options:\n"));
#line 677 "../usage.c"
  puts(_("prohibits the option '%s'\n"));
#line 81 "../numeric.c"
  puts(_("%s%ld to %ld"));
#line 79 "../numeric.c"
  puts(_("%sgreater than or equal to %ld"));
#line 75 "../numeric.c"
  puts(_("%s%ld exactly"));
#line 68 "../numeric.c"
  puts(_("%sit must lie in one of the ranges:\n"));
#line 68 "../numeric.c"
  puts(_("%sit must be in the range:\n"));
#line 88 "../numeric.c"
  puts(_(", or\n"));
#line 66 "../numeric.c"
  puts(_("%sis scalable with a suffix: k/K/m/M/g/G/t/T\n"));
#line 77 "../numeric.c"
  puts(_("%sless than or equal to %ld"));
#line 390 "../usage.c"
  puts(_("Operands and options may be intermixed.  They will be reordered.\n"));
#line 652 "../usage.c"
  puts(_("requires the option '%s'\n"));
#line 655 "../usage.c"
  puts(_("requires these options:\n"));
#line 1321 "../usage.c"
  puts(_("   Arg Option-Name   Req?  Description\n"));
#line 1315 "../usage.c"
  puts(_("  Flg Arg Option-Name   Req?  Description\n"));
#line 168 "../enum.c"
  puts(_("or you may use a numeric representation.  Preceding these with a '!'\n"
       "will clear the bits, specifying 'none' will clear all bits, and 'all'\n"
       "will set them all.  Multiple entries may be passed as an option\n"
       "argument list.\n"));
#line 910 "../usage.c"
  puts(_("\t\t\t\t- may appear up to %d times\n"));
#line 77 "../enum.c"
  puts(_("The valid \"%s\" option keywords are:\n"));
#line 1152 "../usage.c"
  puts(_("The next option supports vendor supported extra options:"));
#line 773 "../usage.c"
  puts(_("These additional options are:"));
  /* END-USAGE-TEXT */
}
#endif /* uncompilable code */
#ifdef  __cplusplus
}
#endif
/* args.c ends here */
