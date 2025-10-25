#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCTextInputNode : public cocos2d::CCLayer, public cocos2d::CCIMEDelegate, public cocos2d::CCTextFieldDelegate {
public:
    static constexpr auto CLASS_NAME = "CCTextInputNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCTextInputNode, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCTextInputNode();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~CCTextInputNode();

    /**
     * @note[short] MacOS (ARM): 0x90610
     * @note[short] MacOS (Intel): 0x9dbd0
     * @note[short] Windows: 0x4f0f0
     * @note[short] iOS: 0x16fe38
     * @note[short] Android
     */
    static CCTextInputNode* create(float p0, float p1, char const* p2, char const* p3, int p4, char const* p5);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CCTextInputNode* create(float width, float height, char const* placeholder, char const* fontPath);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CCTextInputNode* create(float width, float height, char const* placeholder, int fontSize, char const* fontPath);

    /**
     * @note[short] MacOS (ARM): 0x90fec
     * @note[short] MacOS (Intel): 0x9e670
     * @note[short] Windows: 0x4f730
     * @note[short] iOS: 0x1704bc
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x92fac
     * @note[short] MacOS (Intel): 0xa0a80
     * @note[short] Windows: 0x512c0
     * @note[short] iOS: 0x171dbc
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x931a8
     * @note[short] MacOS (Intel): 0xa0ca0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x171f64
     * @note[short] Android: Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x93198
     * @note[short] MacOS (Intel): 0xa0c60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x171f54
     * @note[short] Android: Out of line
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x931a0
     * @note[short] MacOS (Intel): 0xa0c80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x171f5c
     * @note[short] Android: Out of line
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x931b0
     * @note[short] MacOS (Intel): 0xa0cc0
     * @note[short] Windows: 0x514d0
     * @note[short] iOS: 0x171f6c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x91a6c
     * @note[short] MacOS (Intel): 0x9f220
     * @note[short] Windows: 0x50410
     * @note[short] iOS: 0x170d68
     * @note[short] Android
     */
    virtual void textChanged();

    /**
     * @note[short] MacOS (ARM): 0x91a4c
     * @note[short] MacOS (Intel): 0x9f200
     * @note[short] Windows: 0x503f0
     * @note[short] iOS: 0x170d48
     * @note[short] Android
     */
    virtual void onClickTrackNode(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x91808
     * @note[short] MacOS (Intel): 0x9efa0
     * @note[short] Windows: 0x50210
     * @note[short] iOS: 0x170b64
     * @note[short] Android
     */
    virtual void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo& p0);

    /**
     * @note[short] MacOS (ARM): 0x91940
     * @note[short] MacOS (Intel): 0x9f0f0
     * @note[short] Windows: 0x50370
     * @note[short] iOS: 0x170cb8
     * @note[short] Android
     */
    virtual void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo& p0);

    /**
     * @note[short] MacOS (ARM): 0x91b84
     * @note[short] MacOS (Intel): 0x9f340
     * @note[short] Windows: 0x504a0
     * @note[short] iOS: 0x170e00
     * @note[short] Android
     */
    virtual bool onTextFieldInsertText(cocos2d::CCTextFieldTTF* pSender, char const* text, int nLen, cocos2d::enumKeyCodes keyCodes);

    /**
     * @note[short] MacOS (ARM): 0x92124
     * @note[short] MacOS (Intel): 0x9fa00
     * @note[short] Windows: 0x50880
     * @note[short] iOS: 0x1711fc
     * @note[short] Android
     */
    virtual bool onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF* tField);

    /**
     * @note[short] MacOS (ARM): 0x92420
     * @note[short] MacOS (Intel): 0x9fd40
     * @note[short] Windows: 0x50bb0
     * @note[short] iOS: 0x171468
     * @note[short] Android
     */
    virtual bool onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF* tField);

    /**
     * @note[short] MacOS (ARM): 0x90ac8
     * @note[short] MacOS (Intel): 0x9e100
     * @note[short] Windows: 0x4f540
     * @note[short] iOS: 0x170150
     * @note[short] Android
     */
    void addTextArea(TextArea* p0);

    /**
     * @note[short] Android
     */
    void forceOffset();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    cocos2d::CCLabelBMFont* getTextLabel();

    /**
     * @note[short] MacOS (ARM): 0x91118
     * @note[short] MacOS (Intel): 0x9e790
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1705d4
     * @note[short] Android
     */
    gd::string getString();

    /**
     * @note[short] MacOS (ARM): 0x90770
     * @note[short] MacOS (Intel): 0x9dd90
     * @note[short] Windows: 0x4f300
     * @note[short] iOS: 0x16feec
     * @note[short] Android
     */
    bool init(float p0, float p1, char const* p2, char const* p3, int p4, char const* p5);

    /**
     * @note[short] MacOS (ARM): 0x911d4
     * @note[short] MacOS (Intel): 0x9e850
     * @note[short] Windows: 0x4fb40
     * @note[short] iOS: 0x170608
     * @note[short] Android
     */
    void refreshLabel();

    /**
     * @note[short] MacOS (ARM): 0x90fe4
     * @note[short] MacOS (Intel): 0x9e650
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1704b4
     * @note[short] Android: Rebinded
     */
    void setAllowedChars(gd::string filter);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setDelegate(TextInputDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x91408
     * @note[short] MacOS (Intel): 0x9eb20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setLabelNormalColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x913f8
     * @note[short] MacOS (Intel): 0x9eb00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1707b0
     * @note[short] Android
     */
    void setLabelPlaceholderColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x913f0
     * @note[short] MacOS (Intel): 0x9eae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1707a8
     * @note[short] Android
     */
    void setLabelPlaceholderScale(float v);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setMaxLabelLength(int v);

    /**
     * @note[short] MacOS (ARM): 0x913e0
     * @note[short] MacOS (Intel): 0x9eaa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x170798
     * @note[short] Android
     */
    void setMaxLabelScale(float v);

    /**
     * @note[short] MacOS (ARM): 0x913e8
     * @note[short] MacOS (Intel): 0x9eac0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1707a0
     * @note[short] Android
     */
    void setMaxLabelWidth(float v);

    /**
     * @note[short] MacOS (ARM): 0x91048
     * @note[short] MacOS (Intel): 0x9e6d0
     * @note[short] Windows: 0x4f7a0
     * @note[short] iOS: 0x170518
     * @note[short] Android: Rebinded
     */
    void setString(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x913d4
     * @note[short] MacOS (Intel): 0x9ea80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateBlinkLabel();

    /**
     * @note[short] MacOS (ARM): 0x9141c
     * @note[short] MacOS (Intel): 0x9eb40
     * @note[short] Windows: 0x4fe20
     * @note[short] iOS: 0x1707c0
     * @note[short] Android
     */
    void updateBlinkLabelToChar(int p0);

    /**
     * @note[short] MacOS (ARM): 0x92afc
     * @note[short] MacOS (Intel): 0xa0500
     * @note[short] Windows: 0x50d60
     * @note[short] iOS: 0x17197c
     * @note[short] Android
     */
    void updateCursorPosition(cocos2d::CCPoint p0, cocos2d::CCRect p1);

    /**
     * @note[short] MacOS (ARM): 0x90a20
     * @note[short] MacOS (Intel): 0x9e060
     * @note[short] Windows: 0x4f630
     * @note[short] Android: Rebinded
     */
    void updateDefaultFontValues(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x90d00
     * @note[short] MacOS (Intel): 0x9e320
     * @note[short] Windows: 0x4f840
     * @note[short] iOS: 0x170284
     * @note[short] Android: Rebinded
     */
    void updateLabel(gd::string p0);
    bool m_numberInput;
    gd::string m_caption;
    int m_unknown1;
    bool m_selected;
    bool m_unknown2;
    float m_fontValue1;
    float m_fontValue2;
    bool m_isChatFont;
    gd::string m_allowedChars;
    float m_maxLabelWidth;
    float m_maxLabelScale;
    float m_placeholderScale;
    cocos2d::ccColor3B m_placeholderColor;
    cocos2d::ccColor3B m_textColor;
    cocos2d::CCLabelBMFont* m_cursor;
    cocos2d::CCTextFieldTTF* m_textField;
    TextInputDelegate* m_delegate;
    int m_maxLabelLength;
    cocos2d::CCLabelBMFont* m_textLabel;
    bool m_filterSwearWords;
    bool m_usePasswordChar;
    bool m_forceOffset;
    TextArea* m_textArea;
    InputValueType m_valueType;
    int m_decimalPlaces;
    int m_kerningAmount;
};
