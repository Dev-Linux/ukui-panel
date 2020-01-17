/* This file has been generated by the CMake ukui_plugin_translation_loader().
 * It loads UKUi plugin translations.
 *
 * Attention: All changes will be overwritten!!!
 */

#include <QCoreApplication>
#include <QLatin1String>

#include "../../panel/common/ukuitranslator.h"

/* Dummy helper symbol for referencing.
 * In case plugin is linked as static (lib*.a) unreferenced objects are stripped in linking time
 *  => we need to reference some symbol from this file to be not stripped as a whole.
 */
void * loadPluginTranslation_showdesktop_helper = nullptr;

static void loadPluginTranslation()
{
    //XXX: we don't use the QStringLiteral here because it causes SEGFAULT in static finalization time
    // (the string is stored in static QHash and it's destructor can reference already deleted static QString (generated by QStringLiteral))
    UKUi::Translator::translatePlugin(QLatin1String("showdesktop"), QLatin1String("ukui-panel"));
}

Q_COREAPP_STARTUP_FUNCTION(loadPluginTranslation)
